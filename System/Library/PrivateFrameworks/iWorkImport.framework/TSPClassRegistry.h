/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableDictionary;

@interface TSPClassRegistry : NSObject {

	NSMutableDictionary* _registry;
	BOOL _didFinishRegistration;

}
-(void)registerClass:(Class)arg1 forExtensionNumber:(int)arg2 ;
-(Class)classForMessage:(const Message*)arg1 ;
-(Class)classForExtensionNumber:(int)arg1 ;
-(id)init;
@end

