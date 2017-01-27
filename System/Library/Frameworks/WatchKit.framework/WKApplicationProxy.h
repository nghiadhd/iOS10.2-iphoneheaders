/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface WKApplicationProxy : NSObject {

	NSURL* _bundleURL;

}

@property (nonatomic,readonly) NSURL * bundleURL;              //@synthesize bundleURL=_bundleURL - In the implementation block
+(id)watchAppBundleUrlWithContainerUrl:(id)arg1 ;
+(id)gizmoAppBundleUrlWithPluginUrl:(id)arg1 ;
+(id)applicationsForContainerProxy:(id)arg1 ;
-(NSURL *)bundleURL;
-(id)initWithBundleURL:(id)arg1 ;
@end

