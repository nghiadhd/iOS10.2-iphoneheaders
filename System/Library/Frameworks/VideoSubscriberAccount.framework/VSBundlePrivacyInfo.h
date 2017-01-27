/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@class VSPrivacyFacade, NSString;

@interface VSBundlePrivacyInfo : NSObject {

	CFBundleRef _bundle;
	VSPrivacyFacade* _privacyFacade;

}

@property (nonatomic,readonly) CFBundleRef bundle;                                   //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) VSPrivacyFacade * privacyFacade;                      //@synthesize privacyFacade=_privacyFacade - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (assign,getter=isAccessGranted,nonatomic) BOOL accessGranted; 
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(CFBundleRef)bundle;
-(VSPrivacyFacade *)privacyFacade;
-(id)initWithBundle:(CFBundleRef)arg1 privacyFacade:(id)arg2 ;
-(BOOL)isAccessGranted;
-(void)setAccessGranted:(BOOL)arg1 ;
@end

