/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileHandle.h>

@interface NSNullFileHandle : NSFileHandle
-(id)availableData;
-(/*^block*/id)writeabilityHandler;
-(void)setWriteabilityHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)readabilityHandler;
-(void)setReadabilityHandler:(/*^block*/id)arg1 ;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(id)readDataToEndOfFile;
-(void)writeData:(id)arg1 ;
-(void)closeFile;
-(unsigned long long)seekToEndOfFile;
-(int)fileDescriptor;
-(void)seekToFileOffset:(unsigned long long)arg1 ;
-(unsigned long long)offsetInFile;
-(void)synchronizeFile;
-(void)truncateFileAtOffset:(unsigned long long)arg1 ;
@end

