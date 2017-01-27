/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MarkupUI/MarkupUI-Structs.h>
@interface MUImageReader : NSObject
+(BOOL)hasPrivateImageMetadata:(id)arg1 ;
+(id)cleanImageMetadataFromData:(id)arg1 ;
+(id)_privateImageMetadataDescriptors;
-(BOOL)_readAnnotationsFromDataProvider:(CGDataProviderRef)arg1 toController:(id)arg2 ;
-(id)_readDataFromTagAtPath:(id)arg1 inMetadata:(CGImageMetadataRef)arg2 ;
-(void)readAnnotationsFromArchivedModelData:(id)arg1 toController:(id)arg2 ;
-(id)_readBaseImageFromDataProvider:(CGDataProviderRef)arg1 providerSource:(id)arg2 baseWasValid:(BOOL*)arg3 ;
-(BOOL)readAnnotationsFromData:(id)arg1 toController:(id)arg2 ;
-(BOOL)readAnnotationsFromImageAtURL:(id)arg1 toController:(id)arg2 ;
-(id)readBaseImageFromData:(id)arg1 baseWasValid:(BOOL*)arg2 ;
-(id)readBaseImageFromImageAtURL:(id)arg1 baseWasValid:(BOOL*)arg2 ;
@end

