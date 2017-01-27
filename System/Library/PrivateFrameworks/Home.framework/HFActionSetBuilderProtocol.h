/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol HFActionSetBuilderProtocol <NSObject>
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) BOOL requiresDeviceUnlock; 
@required
-(NSArray *)actions;
-(void)removeAllActions;
-(void)addAction:(id)arg1;
-(void)removeAction:(id)arg1;
-(BOOL)requiresDeviceUnlock;
-(void)updateAction:(id)arg1;

@end

