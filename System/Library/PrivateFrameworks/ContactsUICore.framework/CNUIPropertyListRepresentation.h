/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@class NSDictionary;

@interface CNUIPropertyListRepresentation : NSObject {

	id<NSCopying> _propertyList;
	NSDictionary* _attachments;

}

@property (nonatomic,copy,readonly) id<NSCopying> propertyList;              //@synthesize propertyList=_propertyList - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * attachments;              //@synthesize attachments=_attachments - In the implementation block
+(id)propertyListWithContentsOfPackageURL:(id)arg1 dataProxy:(id)arg2 ;
+(id)writePropertyList:(id)arg1 toURL:(id)arg2 dataProxy:(id)arg3 fileManager:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSDictionary *)attachments;
-(id<NSCopying>)propertyList;
-(id)initWithPropertyList:(id)arg1 attachments:(id)arg2 ;
-(id)attachmentWithToken:(id)arg1 extension:(id)arg2 category:(id)arg3 ;
@end

