/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMKFormattingManager : NSObject {

	BOOL _wantsCustomKerning;
	BOOL _supportsVerticalText;

}

@property (nonatomic,readonly) BOOL wantsCustomKerning;                //@synthesize wantsCustomKerning=_wantsCustomKerning - In the implementation block
@property (nonatomic,readonly) BOOL supportsVerticalText;              //@synthesize supportsVerticalText=_supportsVerticalText - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)_commonCMKFormattingManagerInitialization;
-(BOOL)wantsCustomKerning;
-(BOOL)supportsVerticalText;
@end

