/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIViewVisitor.h>

@class UIView;

@interface _UITintColorVisitor : _UIViewVisitor {

	unsigned long long _reasons;
	UIView* _originalVisitedView;
	UIView* _changedSubview;

}
-(id)initWithNotificationReasons:(unsigned long long)arg1 ;
-(id)initWithTraversalDirection:(unsigned long long)arg1 ;
-(BOOL)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5 ;
-(BOOL)_visitView:(id)arg1 ;
@end
