/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPAVQueueCoordinatorDataSource <NSObject>
@optional
-(void)queueCoordinator:(id)arg1 failedToLoadItem:(id)arg2;
-(void)queueCoordinator:(id)arg1 willInsertItem:(id)arg2 afterItem:(id)arg3;
-(void)queueCoordinatorDidChangeItems:(id)arg1;

@required
-(id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2;

@end

