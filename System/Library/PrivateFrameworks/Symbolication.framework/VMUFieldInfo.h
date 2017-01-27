/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, VMUClassInfo, NSArray;

@interface VMUFieldInfo : NSObject {

	NSString* _ivarName;
	NSString* _typeName;
	unsigned _scanType;
	unsigned _offset;
	unsigned _size;
	unsigned _scannable;
	unsigned _stride;
	unsigned _flags;
	VMUClassInfo* _destinationLayout;
	NSArray* _subFieldArray;

}

@property (nonatomic,readonly) unsigned flags;                           //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) BOOL isCapture; 
@property (nonatomic,readonly) BOOL isByref; 
@property (nonatomic,readonly) BOOL isStorageImplPointer; 
@property (nonatomic,readonly) BOOL isArraySize; 
@property (nonatomic,readonly) BOOL isArrayEntries; 
@property (nonatomic,readonly) BOOL isStorageBitmapPointer; 
@property (nonatomic,readonly) BOOL isKeysPointer; 
@property (nonatomic,readonly) BOOL isValuesPointer; 
@property (nonatomic,readonly) BOOL isValueField; 
@property (nonatomic,readonly) BOOL isKeyField; 
@property (readonly) NSString * typedDescription; 
@property (readonly) NSString * ivarName;                                //@synthesize ivarName=_ivarName - In the implementation block
@property (readonly) NSString * typeName;                                //@synthesize typeName=_typeName - In the implementation block
@property (readonly) unsigned scanType;                                  //@synthesize scanType=_scanType - In the implementation block
@property (readonly) unsigned offset;                                    //@synthesize offset=_offset - In the implementation block
@property (readonly) unsigned size;                                      //@synthesize size=_size - In the implementation block
@property (readonly) unsigned scannableSize;                             //@synthesize scannable=_scannable - In the implementation block
@property (readonly) unsigned stride;                                    //@synthesize stride=_stride - In the implementation block
@property (readonly) VMUClassInfo * destinationLayout; 
@property (readonly) NSArray * subFieldArray;                            //@synthesize subFieldArray=_subFieldArray - In the implementation block
-(BOOL)isByref;
-(unsigned)size;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)mutableCopy;
-(void)_setSize:(unsigned)arg1 ;
-(unsigned)offset;
-(NSString *)ivarName;
-(unsigned)scanType;
-(id)initWithName:(id)arg1 type:(id)arg2 scan:(unsigned)arg3 offset:(unsigned)arg4 size:(unsigned)arg5 ;
-(id)initWithObjcIvar:(objc_ivarRef)arg1 size:(unsigned)arg2 isARC:(BOOL)arg3 is64Bit:(BOOL)arg4 ;
-(void)serializeWithClassMap:(id)arg1 simpleSerializer:(id)arg2 version:(unsigned)arg3 ;
-(id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned)arg3 ;
-(VMUClassInfo *)destinationLayout;
-(unsigned)scannableSize;
-(BOOL)isArraySize;
-(BOOL)isArrayEntries;
-(BOOL)isStorageImplPointer;
-(BOOL)isStorageBitmapPointer;
-(BOOL)isKeysPointer;
-(BOOL)isValuesPointer;
-(BOOL)isKeyField;
-(BOOL)isValueField;
-(id)getLeafFieldAtOffset:(unsigned)arg1 leafOffset:(unsigned*)arg2 ;
-(id)initWithName:(id)arg1 type:(id)arg2 kind:(unsigned)arg3 scan:(unsigned)arg4 offset:(unsigned)arg5 size:(unsigned)arg6 stride:(unsigned)arg7 subFieldArray:(id)arg8 ;
-(BOOL)isCapture;
-(id)_getFieldAtOffset:(unsigned)arg1 ;
-(NSString *)typedDescription;
-(id)initStorageInfoFieldWithName:(id)arg1 type:(id)arg2 kind:(unsigned)arg3 scan:(unsigned)arg4 offset:(unsigned)arg5 size:(unsigned)arg6 stride:(unsigned)arg7 subFieldArray:(id)arg8 ;
-(id)initStorageEntryFieldWithName:(id)arg1 type:(id)arg2 kind:(unsigned)arg3 scan:(unsigned)arg4 offset:(unsigned)arg5 size:(unsigned)arg6 stride:(unsigned)arg7 subFieldArray:(id)arg8 ;
-(void)_setIvarName:(id)arg1 ;
-(void)_setTypeName:(id)arg1 ;
-(void)_setScanType:(unsigned)arg1 ;
-(void)_setOffset:(unsigned)arg1 ;
-(void)_setFlags:(unsigned)arg1 ;
-(void)_setScannableSize:(unsigned)arg1 ;
-(void)_setStride:(unsigned)arg1 ;
-(void)_setDestinationLayout:(id)arg1 ;
-(NSArray *)subFieldArray;
-(unsigned)stride;
-(NSString *)typeName;
-(unsigned)flags;
@end

