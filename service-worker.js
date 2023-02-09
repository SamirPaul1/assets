importScripts('https://samirpaulb.github.io/assets/workbox-sw.dev.v0.0.2.js');
importScripts('https://samirpaulb.github.io/assets/workbox-runtime-caching.prod.v1.3.0.js');
importScripts('https://samirpaulb.github.io/assets/workbox-routing.prod.v1.3.0.js');

const assetRoute = new workbox.routing.RegExpRoute({
    regExp: new RegExp('^http://localhost:8081/jobs/static/*'),
    handler: new workbox.runtimeCaching.CacheFirst()
});

const router = new workbox.routing.Router();
//router.addFetchListener();
router.registerRoutes({routes: [assetRoute]});
router.setDefaultHandler({
    handler: new workbox.runtimeCaching.CacheFirst()
});