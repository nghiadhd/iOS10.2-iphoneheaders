/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolRuntimeObjectPreview : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) BOOL lossless; 
@property (assign,nonatomic) long long subtype; 
@property (nonatomic,copy) NSString * stringRepresentation; 
@property (assign,nonatomic) BOOL overflow; 
@property (nonatomic,copy) NSArray * properties; 
@property (nonatomic,copy) NSArray * entries; 
@property (assign,nonatomic) int size; 
-(BOOL)overflow;
-(void)setOverflow:(BOOL)arg1 ;
-(int)size;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(long long)subtype;
-(void)setSize:(int)arg1 ;
-(void)setSubtype:(long long)arg1 ;
-(void)setProperties:(NSArray *)arg1 ;
-(NSArray *)entries;
-(NSArray *)properties;
-(void)setEntries:(NSArray *)arg1 ;
-(NSString *)stringRepresentation;
-(void)setStringRepresentation:(NSString *)arg1 ;
-(void)setLossless:(BOOL)arg1 ;
-(id)initWithType:(long long)arg1 lossless:(BOOL)arg2 ;
-(BOOL)lossless;
@end

