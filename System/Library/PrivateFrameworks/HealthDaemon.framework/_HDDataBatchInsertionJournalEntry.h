/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class HDCodableObjectCollection, HDDataOriginProvenance;

@interface _HDDataBatchInsertionJournalEntry : HDJournalEntry {

	HDCodableObjectCollection* _collection;
	HDDataOriginProvenance* _provenance;

}

@property (nonatomic,readonly) HDCodableObjectCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) HDDataOriginProvenance * provenance;                 //@synthesize provenance=_provenance - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(HDCodableObjectCollection *)collection;
-(HDDataOriginProvenance *)provenance;
-(id)initWithCodableObjectCollection:(id)arg1 provenance:(id)arg2 ;
@end

