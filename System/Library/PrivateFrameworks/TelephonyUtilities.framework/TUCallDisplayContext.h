/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol TUCallDisplayContextDelegate, OS_dispatch_queue;
@class NSString, NSObject, CXCallDirectoryManager;

@interface TUCallDisplayContext : NSObject <NSCopying, NSSecureCoding> {

	int _legacyAddressBookIdentifier;
	id<TUCallDisplayContextDelegate> _delegate;
	NSString* _name;
	NSString* _firstName;
	NSString* _suggestedName;
	NSString* _label;
	NSString* _companyName;
	NSString* _mapName;
	NSString* _location;
	NSString* _contactName;
	NSString* _contactLabel;
	NSString* _callDirectoryLabel;
	NSString* _callDirectoryLocalizedExtensionContainingAppName;
	NSString* _callDirectoryExtensionIdentifier;
	NSString* _contactIdentifier;
	NSObject*<OS_dispatch_queue> _serialQueue;
	CXCallDirectoryManager* _callDirectoryManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) CXCallDirectoryManager * callDirectoryManager;                          //@synthesize callDirectoryManager=_callDirectoryManager - In the implementation block
@property (assign,nonatomic,__weak) id<TUCallDisplayContextDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * name;                                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * firstName;                                                     //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * suggestedName;                                                 //@synthesize suggestedName=_suggestedName - In the implementation block
@property (nonatomic,copy) NSString * label;                                                         //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * companyName;                                                   //@synthesize companyName=_companyName - In the implementation block
@property (nonatomic,copy) NSString * mapName;                                                       //@synthesize mapName=_mapName - In the implementation block
@property (nonatomic,copy) NSString * location;                                                      //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * contactName;                                                   //@synthesize contactName=_contactName - In the implementation block
@property (nonatomic,copy) NSString * contactLabel;                                                  //@synthesize contactLabel=_contactLabel - In the implementation block
@property (nonatomic,copy) NSString * callDirectoryLabel;                                            //@synthesize callDirectoryLabel=_callDirectoryLabel - In the implementation block
@property (nonatomic,copy) NSString * callDirectoryLocalizedExtensionContainingAppName;              //@synthesize callDirectoryLocalizedExtensionContainingAppName=_callDirectoryLocalizedExtensionContainingAppName - In the implementation block
@property (nonatomic,copy) NSString * callDirectoryExtensionIdentifier;                              //@synthesize callDirectoryExtensionIdentifier=_callDirectoryExtensionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                                             //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,nonatomic) int legacyAddressBookIdentifier;                                        //@synthesize legacyAddressBookIdentifier=_legacyAddressBookIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TUCallDisplayContextDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<TUCallDisplayContextDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)contactName;
-(void)setContactName:(NSString *)arg1 ;
-(NSString *)companyName;
-(void)setCompanyName:(NSString *)arg1 ;
-(NSString *)contactIdentifier;
-(CXCallDirectoryManager *)callDirectoryManager;
-(void)setCallDirectoryManager:(CXCallDirectoryManager *)arg1 ;
-(void)_initializeStateWithCall:(id)arg1 ;
-(void)setLegacyAddressBookIdentifier:(int)arg1 ;
-(int)legacyAddressBookIdentifier;
-(void)setMapName:(NSString *)arg1 ;
-(void)setCallDirectoryLabel:(NSString *)arg1 ;
-(void)setCallDirectoryLocalizedExtensionContainingAppName:(NSString *)arg1 ;
-(void)setCallDirectoryExtensionIdentifier:(NSString *)arg1 ;
-(NSString *)mapName;
-(NSString *)callDirectoryLabel;
-(NSString *)callDirectoryLocalizedExtensionContainingAppName;
-(NSString *)callDirectoryExtensionIdentifier;
-(id)initWithCall:(id)arg1 serialQueue:(id)arg2 ;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(void)setSuggestedName:(NSString *)arg1 ;
-(NSString *)suggestedName;
-(void)setFirstName:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSString *)firstName;
-(NSString *)contactLabel;
-(void)setContactLabel:(NSString *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

