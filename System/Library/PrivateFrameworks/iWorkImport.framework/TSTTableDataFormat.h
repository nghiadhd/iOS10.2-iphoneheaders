/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTTableDataObject.h>

@interface TSTTableDataFormat : TSTTableDataObject {

	SCD_Struct_TS45 mFormat;

}

@property (nonatomic,readonly) SCD_Struct_TS49 format; 
-(id)initObjectWithFormat:(SCD_Struct_TS49)arg1 refCount:(unsigned)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SCD_Struct_TS49)format;
@end
