/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSCH3DArray2D : NSObject {

	tvec2<int> mSize;
	NSMutableArray* mElements;

}

@property (nonatomic,readonly) tvec2<int> size; 
+(id)array2DWithSize:(const tvec2<int>*)arg1 ;
+(id)array2D;
-(BOOL)hasObjectAtIndex:(const tvec2<int>*)arg1 ;
-(tvec2<int>)size;
-(void)dealloc;
-(id)objectAtIndex:(const tvec2<int>*)arg1 ;
-(id)firstObject;
-(id)initWithSize:(const tvec2<int>*)arg1 ;
-(void)setObject:(id)arg1 atIndex:(const tvec2<int>*)arg2 ;
-(void)resize:(const tvec2<int>*)arg1 ;
@end

