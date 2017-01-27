/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSPersonNameComponentsFormatter;

@interface CNContactFormatter : NSFormatter {

	BOOL _ignoresOrganization;
	BOOL _ignoresNickname;
	BOOL _emphasizesPrimaryNameComponent;
	NSPersonNameComponentsFormatter* _nameFormatter;
	long long _style;
	unsigned long long _fallbackStyle;
	long long _sortOrder;

}

@property (retain,readonly) NSPersonNameComponentsFormatter * nameFormatter;              //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (assign,nonatomic) BOOL ignoresOrganization;                                    //@synthesize ignoresOrganization=_ignoresOrganization - In the implementation block
@property (assign,nonatomic) BOOL ignoresNickname;                                        //@synthesize ignoresNickname=_ignoresNickname - In the implementation block
@property (assign,nonatomic) unsigned long long fallbackStyle;                            //@synthesize fallbackStyle=_fallbackStyle - In the implementation block
@property (assign,nonatomic) BOOL emphasizesPrimaryNameComponent;                         //@synthesize emphasizesPrimaryNameComponent=_emphasizesPrimaryNameComponent - In the implementation block
@property (assign,nonatomic) long long sortOrder;                                         //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) long long style;                                             //@synthesize style=_style - In the implementation block
+(id)sharedFullNameFormatter;
+(id)sharedFullNameFormatterWithFallBacks;
+(BOOL)styleSupportsFallBackToFullNameStyle:(long long)arg1 ;
+(id)delimiterForContact:(id)arg1 ;
+(id)descriptorForRequiredKeysForStyle:(long long)arg1 ;
+(id)stringFromContact:(id)arg1 style:(long long)arg2 ;
+(long long)nameOrderForContact:(id)arg1 ;
+(id)attributedStringFromContact:(id)arg1 style:(long long)arg2 defaultAttributes:(id)arg3 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(long long)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(long long)sortOrder;
-(void)setSortOrder:(long long)arg1 ;
-(id)attributedStringFromContact:(id)arg1 defaultAttributes:(id)arg2 ;
-(unsigned long long)fallbackStyle;
-(BOOL)ignoresNickname;
-(void)setIgnoresNickname:(BOOL)arg1 ;
-(BOOL)ignoresOrganization;
-(id)stringFromContact:(id)arg1 attributes:(id)arg2 ;
-(id)fullNameForContact:(id)arg1 attributes:(id)arg2 style:(long long)arg3 ;
-(id)shortNameForContact:(id)arg1 attributes:(id)arg2 ;
-(id)avatarNameForContact:(id)arg1 attributes:(id)arg2 ;
-(id)abbreviatedNameForContact:(id)arg1 attributes:(id)arg2 ;
-(void)appendValueForProperties:(id)arg1 fromContact:(id)arg2 toString:(id)arg3 delimiter:(id)arg4 attributes:(id)arg5 fallback:(BOOL)arg6 ;
-(void)appendValue:(id)arg1 derivedFromPropertyName:(id)arg2 toString:(id)arg3 delimiter:(id)arg4 attributes:(id)arg5 ;
-(BOOL)emphasizesPrimaryNameComponent;
-(NSPersonNameComponentsFormatter *)nameFormatter;
-(id)stringFromPotentiallySuggestedContact:(id)arg1 relatedToProperty:(id)arg2 ;
-(id)stringFromContact:(id)arg1 ;
-(void)setEmphasizesPrimaryNameComponent:(BOOL)arg1 ;
-(void)setFallbackStyle:(unsigned long long)arg1 ;
-(void)setIgnoresOrganization:(BOOL)arg1 ;
-(id)descriptorForRequiredKeys;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
@end

