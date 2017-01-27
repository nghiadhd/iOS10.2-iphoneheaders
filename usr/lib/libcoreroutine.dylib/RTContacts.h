/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContact, CNContactStore;

@interface RTContacts : NSObject {

	CNContact* _meCard;
	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNContact * meCard;                         //@synthesize meCard=_meCard - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
+(id)contactFetchKeys;
+(id)addressLabelTypeToLabel:(long long)arg1 ;
+(id)addressLabelTypeToString:(long long)arg1 ;
+(id)convertAddressDictionaryFromContactsToGeoServices:(id)arg1 ;
+(id)addressDictionaryStructuredForGeoServicesFromMapItem:(id)arg1 ;
+(id)convertAddressDictionaryFromGeoServicesToContacts:(id)arg1 ;
+(long long)convertLocationOfInterestType:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setMeCard:(CNContact *)arg1 ;
-(void)updateMeCard;
-(id)mapItemsOfMeCardWithAddressLabelType:(long long)arg1 error:(id*)arg2 ;
-(id)postalAddressesFromContact:(id)arg1 withAddressLabelType:(long long)arg2 ;
-(id)geocodePostalAddress:(id)arg1 error:(id*)arg2 ;
-(id)mapItemsOfContact:(id)arg1 withAddressLabelType:(long long)arg2 error:(id*)arg3 ;
-(id)addressIdentifierOfContact:(id)arg1 withAddressFromMapItem:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateAddressOfContact:(id)arg1 withAddressIdentifier:(id)arg2 toAddressFromMapItem:(id)arg3 error:(id*)arg4 ;
-(BOOL)updateAddressLabelTypeOfContact:(id)arg1 withAddressIdentifier:(id)arg2 toAddressLabelType:(long long)arg3 error:(id*)arg4 ;
-(id)addAddressToContact:(id)arg1 addressLabelType:(long long)arg2 addressFromMapItem:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeAddressOfContact:(id)arg1 withAddressIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasMeCard;
-(id)locationsOfMeCardWithAddressLabelType:(long long)arg1 error:(id*)arg2 ;
-(id)contactsWithAnyPostalAddresses:(id*)arg1 ;
-(id)addressIdentifierOfMeCardWithAddressFromMapItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateAddressOfMeCardWithAddressIdentifier:(id)arg1 toAddressFromMapItem:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateAddressLabelTypeOfMeCardWithAddressIdentifier:(id)arg1 toAddressLabelType:(long long)arg2 error:(id*)arg3 ;
-(id)addAddressToMeCardWithAddressLabelType:(long long)arg1 addressFromMapItem:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeAddressOfMeCardWithAddressIdentifier:(id)arg1 error:(id*)arg2 ;
-(CNContact *)meCard;
@end

