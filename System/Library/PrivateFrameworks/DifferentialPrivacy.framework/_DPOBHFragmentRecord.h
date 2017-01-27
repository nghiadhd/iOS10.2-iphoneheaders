/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DifferentialPrivacy/_DPOBHSequenceRecord.h>

@class NSString;

@interface _DPOBHFragmentRecord : _DPOBHSequenceRecord {

	BOOL _fragmentBitValue;
	short _fragmentPosition;
	short _fragmentWidth;
	long long _fragmentBitPosition;
	NSString* _plainFragment;

}

@property (assign,nonatomic) short fragmentPosition;                     //@synthesize fragmentPosition=_fragmentPosition - In the implementation block
@property (assign,nonatomic) short fragmentWidth;                        //@synthesize fragmentWidth=_fragmentWidth - In the implementation block
@property (assign,nonatomic) long long fragmentBitPosition;              //@synthesize fragmentBitPosition=_fragmentBitPosition - In the implementation block
@property (assign,nonatomic) BOOL fragmentBitValue;                      //@synthesize fragmentBitValue=_fragmentBitValue - In the implementation block
@property (nonatomic,copy) NSString * plainFragment;                     //@synthesize plainFragment=_plainFragment - In the implementation block
+(id)entityName;
+(id)fragmentWithKey:(id)arg1 sequence:(id)arg2 sequenceBitPosition:(unsigned short)arg3 sequenceBitValue:(BOOL)arg4 fragmentPosition:(unsigned short)arg5 fragmentWidth:(unsigned short)arg6 fragment:(id)arg7 fragmentBitPosition:(long long)arg8 fragmentBitValue:(BOOL)arg9 creationDate:(double)arg10 submitted:(BOOL)arg11 objectId:(id)arg12 ;
-(id)description;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(id)jsonString;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(short)fragmentWidth;
-(short)fragmentPosition;
-(void)setFragmentPosition:(short)arg1 ;
-(NSString *)plainFragment;
-(void)setPlainFragment:(NSString *)arg1 ;
-(id)initWithKey:(id)arg1 sequence:(id)arg2 sequenceBitPosition:(unsigned short)arg3 sequenceBitValue:(BOOL)arg4 fragmentPosition:(unsigned short)arg5 fragmentWidth:(unsigned short)arg6 fragment:(id)arg7 fragmentBitPosition:(long long)arg8 fragmentBitValue:(BOOL)arg9 creationDate:(double)arg10 submitted:(BOOL)arg11 objectId:(id)arg12 ;
-(void)setFragmentWidth:(short)arg1 ;
-(long long)fragmentBitPosition;
-(void)setFragmentBitPosition:(long long)arg1 ;
-(BOOL)fragmentBitValue;
-(void)setFragmentBitValue:(BOOL)arg1 ;
@end

