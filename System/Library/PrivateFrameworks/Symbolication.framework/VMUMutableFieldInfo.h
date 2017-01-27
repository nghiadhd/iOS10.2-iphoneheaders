/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/VMUFieldInfo.h>

@class NSString, VMUClassInfo;

@interface VMUMutableFieldInfo : VMUFieldInfo

@property (assign,nonatomic) unsigned scannableSize; 
@property (assign,nonatomic) unsigned stride; 
@property (assign,nonatomic) unsigned flags; 
@property (assign,nonatomic) BOOL isCapture; 
@property (assign,nonatomic) BOOL isByref; 
@property (nonatomic,copy) NSString * ivarName; 
@property (assign,nonatomic) unsigned scanType; 
@property (nonatomic,retain) VMUClassInfo * destinationLayout; 
-(void)setSize:(unsigned)arg1 ;
-(void)setOffset:(unsigned)arg1 ;
-(void)setTypeName:(id)arg1 ;
-(void)setStride:(unsigned)arg1 ;
-(void)setScanType:(unsigned)arg1 ;
-(void)setDestinationLayout:(VMUClassInfo *)arg1 ;
-(void)setIsCapture:(BOOL)arg1 ;
-(void)setIsByref:(BOOL)arg1 ;
-(void)setScannableSize:(unsigned)arg1 ;
-(void)setIvarName:(NSString *)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
@end

