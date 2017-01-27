/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/XPCServices/com.apple.MobileSoftwareUpdate.CleanupPreparePathService.xpc/com.apple.MobileSoftwareUpdate.CleanupPreparePathService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <com.apple.MobileSoftwareUpdate.CleanupPreparePathService/com.apple.MobileSoftwareUpdate.CleanupPreparePathService-Structs.h>
@class NSDictionary;

@interface UMEventCheckpoint : NSObject {

	NSDictionary* _nvramMapping;

}

@property (nonatomic,retain) NSDictionary * nvramMapping;              //@synthesize nvramMapping=_nvramMapping - In the implementation block
+(id)lastSyncedNvram:(id)arg1 ;
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setNvramMapping:(NSDictionary *)arg1 ;
-(id)checkpointNvramInfo:(id)arg1 ;
-(BOOL)cleanupCheckpointsNvram:(id*)arg1 ;
-(NSDictionary *)nvramMapping;
-(id)_init;
@end

