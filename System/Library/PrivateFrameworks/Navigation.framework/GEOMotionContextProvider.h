/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMotionContextProvider <NSObject>
@property (assign,nonatomic,__weak) id<GEOMotionContextProviderDelegate> motionDelegate; 
@required
-(void)stopMotionUpdates;
-(void)startMotionUpdates;
-(void)setMotionDelegate:(id)arg1;
-(id<GEOMotionContextProviderDelegate>)motionDelegate;

@end

