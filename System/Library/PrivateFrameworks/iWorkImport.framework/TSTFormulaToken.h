/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, TSCEFunctionArgumentSpec;


@protocol TSTFormulaToken
@property (nonatomic,readonly) int tokenType; 
@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,retain,readonly) TSCEFunctionArgumentSpec * argumentSpec; 
@required
-(TSCEFunctionArgumentSpec *)argumentSpec;
-(NSString *)string;
-(int)tokenType;

@end

