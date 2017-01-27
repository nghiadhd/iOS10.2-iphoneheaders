/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLayoutRelationship.h>

@class NSArray, NSString;

@interface NSStackLayoutRelationship : NSObject <NSLayoutRelationship> {

	NSArray* _stackedRects;
	double _spacing;
	long long _orientation;

}

@property (copy,readonly) NSArray * stackedRects;                          //@synthesize stackedRects=_stackedRects - In the implementation block
@property (readonly) double spacing;                                       //@synthesize spacing=_spacing - In the implementation block
@property (readonly) long long orientation;                                //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * relationshipDescription; 
+(id)stackWithOrientation:(long long)arg1 stackedRects:(id)arg2 spacing:(double)arg3 ;
+(id)horizontalStackWithRects:(id)arg1 spacing:(double)arg2 ;
+(id)verticalStackWithRects:(id)arg1 spacing:(double)arg2 ;
-(id)makeChildrenRelationships;
-(NSString *)relationshipDescription;
-(id)initWithOrientation:(long long)arg1 stackedRects:(id)arg2 spacing:(double)arg3 ;
-(NSArray *)stackedRects;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(long long)orientation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)spacing;
@end

