/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UAClientController.h>

@class UAUserActivityInfo;

@interface UAReplayClientController : UAClientController {

	UAUserActivityInfo* _item;

}

@property (retain) UAUserActivityInfo * item;              //@synthesize item=_item - In the implementation block
-(id)userActivityInfoForUUID:(id)arg1 ;
-(id)eligibleAdvertiseableItemsInOrder;
-(void)dealloc;
-(UAUserActivityInfo *)item;
-(id)items;
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)setItem:(UAUserActivityInfo *)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(id)statusString;
@end

