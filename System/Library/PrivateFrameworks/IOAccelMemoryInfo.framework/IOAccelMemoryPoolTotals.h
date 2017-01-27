/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IOAccelMemoryPoolTotals : NSObject {

	NSString* device_name;
	NSString* pool;
	unsigned long long allocatedSize;
	unsigned long long residentSize;
	unsigned long long wiredSize;
	unsigned long long dirtySize;
	unsigned long long purgeableSize;
	unsigned long long nonpurgeableSize;
	unsigned long long orphanedSize;

}

@property (retain) NSString * device_name; 
@property (retain) NSString * pool; 
@property (assign) unsigned long long allocatedSize; 
@property (assign) unsigned long long residentSize; 
@property (assign) unsigned long long wiredSize; 
@property (assign) unsigned long long dirtySize; 
@property (assign) unsigned long long purgeableSize; 
@property (assign) unsigned long long nonpurgeableSize; 
@property (assign) unsigned long long orphanedSize; 
-(unsigned long long)residentSize;
-(unsigned long long)dirtySize;
-(void)dealloc;
-(NSString *)pool;
-(void)setPool:(NSString *)arg1 ;
-(NSString *)device_name;
-(void)setDevice_name:(NSString *)arg1 ;
-(unsigned long long)allocatedSize;
-(void)setAllocatedSize:(unsigned long long)arg1 ;
-(void)setResidentSize:(unsigned long long)arg1 ;
-(unsigned long long)wiredSize;
-(void)setWiredSize:(unsigned long long)arg1 ;
-(void)setDirtySize:(unsigned long long)arg1 ;
-(unsigned long long)purgeableSize;
-(void)setPurgeableSize:(unsigned long long)arg1 ;
-(unsigned long long)nonpurgeableSize;
-(void)setNonpurgeableSize:(unsigned long long)arg1 ;
-(unsigned long long)orphanedSize;
-(void)setOrphanedSize:(unsigned long long)arg1 ;
@end

