/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <StoreServices/SSMemoryEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DownloadAsset : SSMemoryEntity <NSCopying>
+(Class)databaseEntityClass;
-(id)initWithJobAsset:(id)arg1 ;
-(id)initWithExternalManifestDictionary:(id)arg1 validateVariants:(BOOL)arg2 ;
-(id)copyJobAsset;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURLRequestProperties:(id)arg1 ;
@end

