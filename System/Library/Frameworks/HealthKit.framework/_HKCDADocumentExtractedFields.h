/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface _HKCDADocumentExtractedFields : NSObject {

	NSDate* _extractedDate;
	NSString* _extractedTitle;
	NSString* _extractedPatient;
	NSString* _extractedAuthorName;
	NSString* _extractedCustodianName;

}

@property (nonatomic,readonly) NSDate * extractedDate;                         //@synthesize extractedDate=_extractedDate - In the implementation block
@property (nonatomic,readonly) NSString * extractedTitle;                      //@synthesize extractedTitle=_extractedTitle - In the implementation block
@property (nonatomic,readonly) NSString * extractedPatient;                    //@synthesize extractedPatient=_extractedPatient - In the implementation block
@property (nonatomic,readonly) NSString * extractedAuthorName;                 //@synthesize extractedAuthorName=_extractedAuthorName - In the implementation block
@property (nonatomic,readonly) NSString * extractedCustodianName;              //@synthesize extractedCustodianName=_extractedCustodianName - In the implementation block
-(id)initWithDocumentData:(id)arg1 ;
-(NSDate *)extractedDate;
-(NSString *)extractedTitle;
-(NSString *)extractedPatient;
-(NSString *)extractedAuthorName;
-(NSString *)extractedCustodianName;
-(void)extractHeaderFieldsFromDocumentData:(id)arg1 ;
-(id)_firstFrom:(id)arg1 tagRule:(id)arg2 nilOnFail:(BOOL)arg3 ;
-(id)_parseCDADate:(id)arg1 ;
-(id)_personNameFrom:(id)arg1 familyTagRule:(id)arg2 givenTagRule:(id)arg3 nilOnFail:(BOOL)arg4 ;
@end

