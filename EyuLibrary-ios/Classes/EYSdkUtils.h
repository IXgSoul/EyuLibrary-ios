//
//  EYSdkUtils.h
//  ballzcpp-mobile
//
//  Created by qianyuan on 2017/12/19.
//

#ifndef EYSdkUtils_h
#define EYSdkUtils_h

#import <Foundation/Foundation.h>



@interface EYSdkUtils : NSObject {
    
}

#ifdef FACEBOOK_ENABLED
/**
 *需要再info.plist里设置FacebookAppID
 **/
+(void) initFacebookSdkWithApplication:(UIApplication *)application options:(NSDictionary *)launchOptions;
    
+ (BOOL)application:(UIApplication *)application
            openURL:(NSURL *)url
            options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;
#endif

#ifdef FIREBASE_ENABLED
+(void) initFirebaseSdk;
#endif
+(void) initAppFlyer:(NSString*) devKey appId:(NSString*)appId;
+(void) initUMMobSdk:(NSString*) appKey channel:(NSString*) channel;
+(void) initGDTActionSdk:(NSString*) setid secretkey:(NSString*)secretkey;
+(void) doGDTSDKActionStartApp;

+ (NSData *)readFileWithName:(NSString *)name;
+ (NSDictionary *)readJsonFileWithName:(NSString *)name;

+(bool) isUMInited;
+(bool) isGDTInited;
+(bool) isFBInited;
@end

#endif /* EYSdkUtils_h */



