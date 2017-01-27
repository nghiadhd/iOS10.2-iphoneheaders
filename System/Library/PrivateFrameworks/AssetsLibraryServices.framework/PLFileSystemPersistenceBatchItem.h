/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary;

@interface PLFileSystemPersistenceBatchItem : NSObject {

	NSURL* _fileURL;
	NSMutableDictionary* _attributes;

}

@property (nonatomic,retain,readonly) NSURL * fileURL;                      //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(void)dealloc;
-(id)description;
-(NSMutableDictionary *)attributes;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(NSURL *)fileURL;
-(void)persist;
-(void)setUUIDString:(id)arg1 forKey:(id)arg2 ;
-(void)setUInt16:(unsigned short)arg1 forKey:(id)arg2 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
@end

