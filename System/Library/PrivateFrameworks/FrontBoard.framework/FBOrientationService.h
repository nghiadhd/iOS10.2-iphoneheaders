/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBOrientationServiceServer;

@interface FBOrientationService : NSObject {

	FBOrientationServiceServer* _server;

}
+(id)sharedInstance;
-(id)init;
-(void)noteInterfaceOrientationChanged:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3 ;
-(void)noteInterfaceOrientationChanged:(long long)arg1 ;
@end

