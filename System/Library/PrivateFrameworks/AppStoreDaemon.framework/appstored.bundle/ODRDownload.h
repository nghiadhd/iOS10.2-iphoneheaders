/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@interface ODRDownload : NSManagedObject
+(id)downloadsWithIdentifier:(long long)arg1 ;
+(void)deleteDownload:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(void)deleteDownloads:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)allDownloads;
+(id)downloadsWithSourceURL:(id)arg1 withDestinationURL:(id)arg2 ;
+(void)addDownloadWithIdentifier:(long long)arg1 withSourceURLString:(id)arg2 withDestinationURLString:(id)arg3 inManagedObjectContext:(id)arg4 ;
@end

