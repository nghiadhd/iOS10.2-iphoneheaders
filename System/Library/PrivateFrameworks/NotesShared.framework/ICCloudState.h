/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, ICCloudSyncingObject;

@interface ICCloudState : NSManagedObject

@property (assign,nonatomic) BOOL inCloud; 
@property (assign,nonatomic) long long latestVersionSyncedToCloud; 
@property (assign,nonatomic) long long currentLocalVersion; 
@property (nonatomic,retain) NSDate * localVersionDate; 
@property (nonatomic,retain) ICCloudSyncingObject * cloudSyncingObject; 
-(BOOL)isInCloud;
@end

