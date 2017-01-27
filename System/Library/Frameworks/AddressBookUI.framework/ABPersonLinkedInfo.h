/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ABUIPerson;

@interface ABPersonLinkedInfo : NSObject {

	NSString* _type;
	NSString* _name;
	ABUIPerson* _person;
	BOOL _unified;

}

@property (retain) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (retain) ABUIPerson * person;                 //@synthesize person=_person - In the implementation block
@property (getter=isUnified) BOOL unified;              //@synthesize unified=_unified - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setPerson:(ABUIPerson *)arg1 ;
-(ABUIPerson *)person;
-(BOOL)isUnified;
-(void)setUnified:(BOOL)arg1 ;
@end

