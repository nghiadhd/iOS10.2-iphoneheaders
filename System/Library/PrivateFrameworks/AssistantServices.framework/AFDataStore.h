/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFUIDataStoring.h>

@class NSMutableDictionary, NSString;

@interface AFDataStore : NSObject <AFUIDataStoring> {

	NSMutableDictionary* _entries;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(id)afui_dataStoringShim;
-(id)init;
-(void)setImageData:(id)arg1 forKey:(id)arg2 ;
-(id)imageDataForKey:(id)arg1 ;
-(id)propertyListRepresentation;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(id)initWithEntries:(id)arg1 ;
@end

