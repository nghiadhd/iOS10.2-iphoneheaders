/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class NSArray;

@interface TSPObjectSerializationMetadata : TSPObject {

	ObjectSerializationMetadata* _message;
	NSArray* _dataReferences;

}

@property (nonatomic,copy) NSArray * dataReferences;              //@synthesize dataReferences=_dataReferences - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(long long)tsp_identifier;
-(NSArray *)dataReferences;
-(void)setDataReferences:(NSArray *)arg1 ;
-(ObjectSerializationMetadata*)message;
@end

