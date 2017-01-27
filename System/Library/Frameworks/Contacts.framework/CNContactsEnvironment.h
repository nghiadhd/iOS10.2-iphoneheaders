/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, SGSuggestionsService;

@interface CNContactsEnvironment : NSObject {

	NSURL* _baseURL;
	SGSuggestionsService* _suggestionsService;

}

@property (nonatomic,copy) NSURL * baseURL;                                          //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) SGSuggestionsService * suggestionsService;              //@synthesize suggestionsService=_suggestionsService - In the implementation block
@property (nonatomic,readonly) BOOL useInMemoryStores; 
+(BOOL)supportsSecureCoding;
+(id)inMemoryURL;
+(id)unitTestingEnvironment;
+(id)baseURLWithDataLocationName:(id)arg1 ;
+(id)unitTestingEnvironmentWithDataLocationName:(id)arg1 ;
+(id)currentEnvironment;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(BOOL)useInMemoryStores;
-(void)setSuggestionsService:(SGSuggestionsService *)arg1 ;
-(SGSuggestionsService *)suggestionsService;
@end

