/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol GEOCompletionItem;
@class NSString, CLLocation, _MKLocalSearchMerchantParameters, _MKLocalSearchExternalTransitLookupParameters, NSArray;

@interface MKLocalSearchRequest : NSObject <NSCopying> {

	NSString* _naturalLanguageQuery;
	BOOL _hasRegion;
	SCD_Struct_MK4 _region;
	BOOL _allowPhoneNumberLookupUsingCellular;
	BOOL _hasSentFeedbackForCompletion;
	int _resultProviderID;
	id<GEOCompletionItem> _geoCompletionItem;
	CLLocation* _deviceLocation;
	_MKLocalSearchMerchantParameters* _merchantParameters;
	_MKLocalSearchExternalTransitLookupParameters* _externalTransitLookupParameters;
	NSArray* _phoneNumbers;
	NSArray* _muids;
	NSString* _contactsDataString;
	NSString* _canonicalSearchString;

}

@property (nonatomic,readonly) BOOL _hasRegion;                                                                                                                                                                //@synthesize hasRegion=_hasRegion - In the implementation block
@property (nonatomic,readonly) id<GEOCompletionItem> geoCompletionItem;                                                                                                                                        //@synthesize geoCompletionItem=_geoCompletionItem - In the implementation block
@property (assign,nonatomic) BOOL hasSentFeedbackForCompletion;                                                                                                                                                //@synthesize hasSentFeedbackForCompletion=_hasSentFeedbackForCompletion - In the implementation block
@property (setter=_setDeviceLocation:,getter=_deviceLocation,nonatomic,retain) CLLocation * deviceLocation;                                                                                                    //@synthesize deviceLocation=_deviceLocation - In the implementation block
@property (setter=_setMerchantParameters:,getter=_merchantParameters,nonatomic,retain) _MKLocalSearchMerchantParameters * merchantParameters;                                                                  //@synthesize merchantParameters=_merchantParameters - In the implementation block
@property (setter=_setExternalTransitLookupParameters:,getter=_externalTransitLookupParameters,nonatomic,retain) _MKLocalSearchExternalTransitLookupParameters * externalTransitLookupParameters;              //@synthesize externalTransitLookupParameters=_externalTransitLookupParameters - In the implementation block
@property (setter=_setPhoneNumbers:,getter=_phoneNumbers,nonatomic,retain) NSArray * phoneNumbers;                                                                                                             //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (assign,setter=_setAllowPhoneNumberLookupUsingCellular:,getter=_allowPhoneNumberLookupUsingCellular,nonatomic) BOOL allowPhoneNumberLookupUsingCellular;                                             //@synthesize allowPhoneNumberLookupUsingCellular=_allowPhoneNumberLookupUsingCellular - In the implementation block
@property (setter=_setMuids:,getter=_muids,nonatomic,retain) NSArray * muids;                                                                                                                                  //@synthesize muids=_muids - In the implementation block
@property (assign,setter=_setResultProviderID:,getter=_resultProviderID,nonatomic) int resultProviderID;                                                                                                       //@synthesize resultProviderID=_resultProviderID - In the implementation block
@property (setter=_setContactsDataString:,getter=_contactsDataString,nonatomic,retain) NSString * contactsDataString;                                                                                          //@synthesize contactsDataString=_contactsDataString - In the implementation block
@property (setter=_setCanonicalSearchString:,getter=_canonicalSearchString,nonatomic,retain) NSString * canonicalSearchString;                                                                                 //@synthesize canonicalSearchString=_canonicalSearchString - In the implementation block
@property (nonatomic,copy) NSString * naturalLanguageQuery;                                                                                                                                                    //@synthesize naturalLanguageQuery=_naturalLanguageQuery - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK16 region;                                                                                                                                                           //@synthesize region=_region - In the implementation block
+(id)searchRequestWithCompletion:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRegion:(SCD_Struct_MK16)arg1 ;
-(SCD_Struct_MK16)region;
-(id)initWithCompletion:(id)arg1 ;
-(int)_resultProviderID;
-(id)_dictionaryRepresentation;
-(BOOL)_hasRegion;
-(BOOL)_allowPhoneNumberLookupUsingCellular;
-(id)_deviceLocation;
-(id)_merchantParameters;
-(id)_externalTransitLookupParameters;
-(id)_phoneNumbers;
-(id)_muids;
-(id)_contactsDataString;
-(id)_canonicalSearchString;
-(void)_setContactsDataString:(id)arg1 ;
-(NSString *)naturalLanguageQuery;
-(void)setNaturalLanguageQuery:(NSString *)arg1 ;
-(id<GEOCompletionItem>)geoCompletionItem;
-(void)_setDeviceLocation:(id)arg1 ;
-(void)_setMerchantParameters:(id)arg1 ;
-(void)_setExternalTransitLookupParameters:(id)arg1 ;
-(void)_setPhoneNumbers:(id)arg1 ;
-(void)_setMuids:(id)arg1 ;
-(void)_setResultProviderID:(int)arg1 ;
-(void)_setCanonicalSearchString:(id)arg1 ;
-(void)_setAllowPhoneNumberLookupUsingCellular:(BOOL)arg1 ;
-(BOOL)hasSentFeedbackForCompletion;
-(void)setHasSentFeedbackForCompletion:(BOOL)arg1 ;
-(id)initWithMapsURL:(id)arg1 ;
@end

