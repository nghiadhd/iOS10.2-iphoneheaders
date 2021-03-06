/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/Phone.assistantBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAPhoneSearch.h>
#import <Accessibility/AFServiceCommand.h>

@class VMVoicemailManager, CHManager, NSString;

@interface PHSearchRequest : SAPhoneSearch <AFServiceCommand> {

	VMVoicemailManager* _voicemailManager;
	CHManager* _recentsManager;

}

@property (nonatomic,retain) VMVoicemailManager * voicemailManager;              //@synthesize voicemailManager=_voicemailManager - In the implementation block
@property (nonatomic,retain) CHManager * recentsManager;                         //@synthesize recentsManager=_recentsManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)recentCallsFilterPredicate;
-(void*)addressBookRecordForRawAddress:(id)arg1 ;
-(id)labelForRawAddress:(id)arg1 ;
-(void)setRecentsManager:(CHManager *)arg1 ;
-(id)personFromAddressBookRecord:(void*)arg1 ;
-(id)contactsRecordIDs;
-(id)typedDataForRawAddress:(id)arg1 ;
-(id)phoneCallHistoryFromRecentCall:(id)arg1 ;
-(id)recordIDStringFromVoicemail:(id)arg1 ;
-(id)voicemailFilterPredicate;
-(CHManager *)recentsManager;
-(id)phoneVoiceMailFromVMVoicemail:(id)arg1 ;
-(id)personFromRawAddress:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)_validate;
-(id)_perform;
-(id)recentCalls;
-(id)voicemails;
-(VMVoicemailManager *)voicemailManager;
-(void)setVoicemailManager:(VMVoicemailManager *)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

