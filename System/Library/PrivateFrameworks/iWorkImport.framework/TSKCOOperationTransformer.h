/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TSKCOIntermediateOperationEnumerator;
@class NSObject, TSPObject;

@interface TSKCOOperationTransformer : NSObject <NSCopying> {

	NSObject*<TSKCOIntermediateOperationEnumerator> mEnumerator;
	BOOL mIsHigherPriority;
	TSPObject* mDelegate;

}

@property (assign,nonatomic) TSPObject * delegate; 
@property (nonatomic,readonly) BOOL hasOperations; 
@property (nonatomic,readonly) NSObject*<TSKCOIntermediateOperationEnumerator> enumerator; 
-(void)saveToArchiver:(id)arg1 message:(OperationTransformer*)arg2 ;
-(id)initWithUnarchiver:(id)arg1 message:(const OperationTransformer*)arg2 ;
-(id)transformUpdateRangeOperation:(id)arg1 ;
-(id)transformIdPlacementBaseOperation:(id)arg1 ;
-(void)appendOperation:(id)arg1 ;
-(id)initWithOperationEnumerator:(id)arg1 ;
-(id)initWithOperationEnumerator:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)transformUpdateIdOperation:(id)arg1 ;
-(id)transformReplaceRangeOperation:(id)arg1 ;
-(id)transformOperations:(id)arg1 ;
-(NSObject*<TSKCOIntermediateOperationEnumerator>)enumerator;
-(void)setDelegate:(TSPObject *)arg1 ;
-(void)dealloc;
-(id)description;
-(TSPObject *)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasOperations;
@end

