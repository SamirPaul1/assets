let cache_name = "cache-A";
let filesToCache = [
    "https://myApp.com/",
    "index.php?launcher=true;homescreen=1",
    "manifest.json",
    "favicon.ico",
];

self.addEventListener( "install", eo => {
    self.skipWaiting();
    eo.waitUntil( filesAreCached() );
} );

///////| helper functions |/////////
function filesAreCached(){
    
    Promise.all([
        /* name the directories whose files you wish to cache */
        getFileArray( "js" ),
        getFileArray( "css" ),
        getFileArray( "images" ),
        getFileArray( "screens" ),
        getFileArray( "modals" )        
    ])
    .then( promiseArray => {
        let promisedFiles = [];
        promiseArray.forEach( array => {
            promisedFiles = promisedFiles.concat( array ) ;
        } );
        return promisedFiles;       
    }) 
    .then( promisedFiles => {
        filesToCache = filesToCache.concat( promisedFiles );
        console.log( "Cached files:", filesToCache  );
        return self.caches.open( cache_name );
    })
    .then( cache => cache.addAll( filesToCache ) );
}

/* 
 the following function calls a server script that returns an array of filenames,
 each one prepended with the directory name:  
*/
async  function getFileArray( directory ){
    let form = new FormData();
    form.append( `directory`, directory );
    let fileArray = await fetch( `php/getFileArray.php`, { method: `POST`, body: form })
    .then( response => response.json() ) ;
    
    return fileArray;
}
