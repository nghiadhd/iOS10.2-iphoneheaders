/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebMultipleTextMatches <NSObject>
@required
-(unsigned long long)countMatchesForText:(id)arg1 inDOMRange:(id)arg2 options:(unsigned long long)arg3 limit:(unsigned long long)arg4 markMatches:(BOOL)arg5;
-(void)setMarkedTextMatchesAreHighlighted:(BOOL)arg1;
-(BOOL)markedTextMatchesAreHighlighted;
-(void)unmarkAllTextMatches;
-(id)rectsForTextMatches;

@end

