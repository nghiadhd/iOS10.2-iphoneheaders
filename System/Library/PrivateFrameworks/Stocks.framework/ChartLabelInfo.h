/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Stocks/Stocks-Structs.h>
@class NSString;

@interface ChartLabelInfo : NSObject {

	NSString* _string;
	CGSize _size;
	double _position;
	BOOL _immutable;

}

@property (nonatomic,retain) NSString * string;              //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) CGSize size;                    //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double position;                //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) BOOL immutable;               //@synthesize immutable=_immutable - In the implementation block
-(CGSize)size;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(void)setImmutable:(BOOL)arg1 ;
-(void)setStringToYearWithDate:(id)arg1 timeZone:(id)arg2 ;
-(void)retainStringAndSizeFromLabelInfo:(id)arg1 ;
-(void)setStringToMonthAndDayWithDate:(id)arg1 timeZone:(id)arg2 ;
-(BOOL)immutable;
@end

