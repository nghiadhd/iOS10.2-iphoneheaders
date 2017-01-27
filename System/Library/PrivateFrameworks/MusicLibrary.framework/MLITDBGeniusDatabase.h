/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3MusicLibrary;

@interface MLITDBGeniusDatabase : NSObject

@property (nonatomic,readonly) ML3MusicLibrary * musicLibrary; 
+(id)sharedGeniusDatabase;
-(id)init;
-(ML3MusicLibrary *)musicLibrary;
-(void)performGeniusDatabaseReadWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_copyBlobData:(id*)arg1 blobAllocType:(int)arg2 table:(id)arg3 blobColumn:(id)arg4 where:(id)arg5 ;
-(BOOL)_hasAnySongs;
-(BOOL)_hasRowsInTable:(id)arg1 ;
-(unsigned)_getInt32ValueInTable:(id)arg1 column:(id)arg2 ;
-(id)_copyBlobDataAndBytesInTable:(id)arg1 blobColumn:(id)arg2 where:(id)arg3 ;
-(BOOL)_readBlobIntoData:(id)arg1 table:(id)arg2 blobColumn:(id)arg3 where:(id)arg4 ;
-(BOOL)_readBlobForRowID:(unsigned long long)arg1 intoData:(id)arg2 table:(const char*)arg3 blobColumn:(const char*)arg4 ;
-(unsigned long long)_getInt64ValueInTable:(id)arg1 column:(id)arg2 where:(id)arg3 limit:(unsigned)arg4 ;
-(unsigned long long)defaultMinTrackCount;
-(unsigned long long)defaultTrackCount;
-(id)copyGeniusConfigrationDataAndBytes;
-(unsigned)geniusConfigurationVersion;
-(id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1 ;
-(id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1 ;
-(BOOL)getGeniusConfigrationDataAndBytesIntoData:(id)arg1 ;
-(BOOL)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2 ;
-(BOOL)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2 ;
-(BOOL)hasGeniusFeatureEnabled;
-(BOOL)hasGeniusDataAvailable;
@end

