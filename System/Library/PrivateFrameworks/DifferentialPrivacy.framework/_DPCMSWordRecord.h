/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DifferentialPrivacy/_DPCMSSequenceRecord.h>

@class NSData, NSString;

@interface _DPCMSWordRecord : _DPCMSSequenceRecord {

	short _fragmentPosition;
	short _fragmentHashIndex;
	NSData* _fragment;
	NSString* _plainFragment;

}

@property (nonatomic,retain) NSData * fragment;                    //@synthesize fragment=_fragment - In the implementation block
@property (assign,nonatomic) short fragmentPosition;               //@synthesize fragmentPosition=_fragmentPosition - In the implementation block
@property (assign,nonatomic) short fragmentHashIndex;              //@synthesize fragmentHashIndex=_fragmentHashIndex - In the implementation block
@property (nonatomic,copy) NSString * plainFragment;               //@synthesize plainFragment=_plainFragment - In the implementation block
+(id)entityName;
+(id)recordWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 plainFragment:(id)arg5 fragment:(id)arg6 fragmentHashIndex:(unsigned short)arg7 fragmentPosition:(unsigned short)arg8 creationDate:(double)arg9 submitted:(BOOL)arg10 objectId:(id)arg11 ;
-(id)description;
-(NSData *)fragment;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(void)setFragment:(NSData *)arg1 ;
-(id)jsonString;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 plainFragment:(id)arg5 fragment:(id)arg6 fragmentHashIndex:(unsigned short)arg7 fragmentPosition:(unsigned short)arg8 creationDate:(double)arg9 submitted:(BOOL)arg10 objectId:(id)arg11 ;
-(short)fragmentPosition;
-(void)setFragmentPosition:(short)arg1 ;
-(short)fragmentHashIndex;
-(void)setFragmentHashIndex:(short)arg1 ;
-(NSString *)plainFragment;
-(void)setPlainFragment:(NSString *)arg1 ;
@end

