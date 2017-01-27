/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INMessageExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, INPerson, NSArray;

@interface INMessage : NSObject <INCacheableContainer, INMessageExport, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _content;
	NSDate* _dateSent;
	INPerson* _sender;
	NSArray* _recipients;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * content;                 //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateSent;                  //@synthesize dateSent=_dateSent - In the implementation block
@property (nonatomic,copy,readonly) INPerson * sender;                  //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipients;               //@synthesize recipients=_recipients - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(NSString *)content;
-(INPerson *)sender;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_dictionaryRepresentation;
-(NSDate *)dateSent;
-(NSArray *)recipients;
-(id)cacheableObjects;
-(id)initWithIdentifier:(id)arg1 content:(id)arg2 dateSent:(id)arg3 sender:(id)arg4 recipients:(id)arg5 ;
@end

