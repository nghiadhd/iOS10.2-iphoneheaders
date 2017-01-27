/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, INPerson, NSArray;


@protocol INMessageExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,copy) NSDate * dateSent; 
@property (nonatomic,copy) INPerson * sender; 
@property (nonatomic,copy) NSArray * recipients; 
@required
-(id)init;
-(NSString *)identifier;
-(NSString *)content;
-(INPerson *)sender;
-(void)setIdentifier:(id)arg1;
-(void)setSender:(id)arg1;
-(void)setContent:(id)arg1;
-(NSDate *)dateSent;
-(NSArray *)recipients;
-(void)setRecipients:(id)arg1;
-(void)setDateSent:(id)arg1;

@end

