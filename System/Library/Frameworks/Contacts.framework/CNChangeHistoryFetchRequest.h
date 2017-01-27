/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNChangeHistoryFetchRequest : NSObject <NSSecureCoding> {

	BOOL _contactChanges;
	BOOL _groupChanges;
	NSString* _clientIdentifier;

}

@property (nonatomic,retain) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) BOOL contactChanges;                      //@synthesize contactChanges=_contactChanges - In the implementation block
@property (assign,nonatomic) BOOL groupChanges;                        //@synthesize groupChanges=_groupChanges - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(BOOL)contactChanges;
-(void)setContactChanges:(BOOL)arg1 ;
-(BOOL)groupChanges;
-(void)setGroupChanges:(BOOL)arg1 ;
-(NSString *)clientIdentifier;
@end

