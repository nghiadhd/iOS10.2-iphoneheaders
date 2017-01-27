/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/GQZArchiveInputStream.h>

@class NSData, NSString;

@interface GQZArchiveMemoryInputStream : NSObject <GQZArchiveInputStream> {

	NSData* mData;
	const char* mBytes;
	long long mSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(const char*)dataAtOffset:(long long)arg1 size:(unsigned long long)arg2 end:(long long)arg3 readSize:(unsigned long long*)arg4 ;
-(void)readFromOffset:(long long)arg1 size:(unsigned long long)arg2 buffer:(char*)arg3 ;
-(long long)size;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
@end

