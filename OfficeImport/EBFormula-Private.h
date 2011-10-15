/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/EBFormula.h>

@interface EBFormula (Private)
+ (char *)edFormulaToParsedExpression:(id)arg1 tokenLength:(unsigned short *)arg2 formulaLength:(unsigned short *)arg3 state:(id)arg4;
+ (unsigned int)writeToken:(id)arg1 tokenIndex:(unsigned int)arg2 tokenStream:(struct XLFormulaStream *)arg3 extendedStream:(struct XLFormulaStream *)arg4 state:(id)arg5;
+ (void)setupTokensInEDFormulaFromXlFormulaProcessor:(struct XlFormulaProcessor *)arg1 length:(int)arg2 edFormula:(id)arg3 edSheet:(id)arg4;
+ (struct XlFormulaInfo *)xlFormulaInfoFromEDSharedFormula:(id)arg1 state:(id)arg2;
+ (void)setupFormulaDataForSharedFormula:(id)arg1 xlFormulaInfo:(struct XlFormulaInfo *)arg2 state:(id)arg3;
@end

