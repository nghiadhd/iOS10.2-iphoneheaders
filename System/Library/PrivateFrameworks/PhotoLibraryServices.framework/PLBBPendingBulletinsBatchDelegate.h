/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLBBPendingBulletinsBatchDelegate <NSObject>
@required
-(void)bulletinsBatch:(id)arg1 didProcessReadyBulletins:(id)arg2 stillPending:(BOOL)arg3;
-(BOOL)bulletinsBatch:(id)arg1 shouldAllowAlertsFromContactWithEmail:(id)arg2;
-(id)bulletinsBatch:(id)arg1 bulletinByMergingPersistedListWithBulletin:(id)arg2;

@end

