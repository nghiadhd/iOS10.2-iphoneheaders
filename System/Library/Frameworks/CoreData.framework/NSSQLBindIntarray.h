/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSSQLBindIntarray : NSObject {

	unsigned _index;
	id _value;
	NSString* _tableName;

}

@property (assign) unsigned index;                    //@synthesize index=_index - In the implementation block
@property (retain) id value;                          //@synthesize value=_value - In the implementation block
@property (retain) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
-(void)setTableName:(NSString *)arg1 ;
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(unsigned)index;
-(id)initWithValue:(id)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(NSString *)tableName;
@end

