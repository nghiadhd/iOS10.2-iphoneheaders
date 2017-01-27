/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSString;

@interface _WKElementAction : NSObject {

	RetainPtr<NSString>* _title;
	/*^block*/id _actionHandler;
	/*^block*/id _dismissalHandler;
	WeakObjCPtr<WKActionSheetAssistant> _defaultActionSheetAssistant;
	long long _type;

}

@property (nonatomic,readonly) long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,copy) id dismissalHandler;               //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
+(id)_elementActionWithType:(long long)arg1 customTitle:(id)arg2 assistant:(id)arg3 ;
+(id)elementActionWithType:(long long)arg1 customTitle:(id)arg2 ;
+(id)_elementActionWithType:(long long)arg1 title:(id)arg2 actionHandler:(/*^block*/id)arg3 ;
+(id)_elementActionWithType:(long long)arg1 assistant:(id)arg2 ;
+(id)elementActionWithType:(long long)arg1 ;
+(id)elementActionWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSString *)title;
-(long long)type;
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
-(id)_initWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 type:(long long)arg3 assistant:(id)arg4 ;
-(void)_runActionWithElementInfo:(id)arg1 forActionSheetAssistant:(id)arg2 ;
-(void)runActionWithElementInfo:(id)arg1 ;
@end

