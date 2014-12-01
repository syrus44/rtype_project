<?xml version="1.0" encoding="UTF-8"?>
<?PowerDesigner AppLocale="UTF16" ID="{3B63FBA9-7552-4144-8672-C87EF6ED4E56}" Label="" LastModificationDate="1382351616" Name="Diagramme de séquence client" Objects="49" Symbols="49" Target="Java" TargetLink="Reference" Type="{18112060-1A4B-11D1-83D9-444553540000}" signature="CLD_OBJECT_MODEL" version="15.1.0.2850"?>
<!-- Veuillez ne pas modifier ce fichier -->

<Model xmlns:a="attribute" xmlns:c="collection" xmlns:o="object">

<o:RootObject Id="o1">
<c:Children>
<o:Model Id="o2">
<a:ObjectID>3B63FBA9-7552-4144-8672-C87EF6ED4E56</a:ObjectID>
<a:Name>Diagramme de séquence client</a:Name>
<a:Code>Diagramme_de_sequence_client</a:Code>
<a:CreationDate>1382223287</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382351601</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<a:PackageOptionsText>[FolderOptions]

[FolderOptions\Class Diagram Objects]
GenerationCheckModel=Yes
GenerationPath=
GenerationOptions=
GenerationTasks=
GenerationTargets=
GenerationSelections=</a:PackageOptionsText>
<a:ModelOptionsText>[ModelOptions]

[ModelOptions\Cld]
CaseSensitive=Yes
DisplayName=Yes
EnableTrans=Yes
EnableRequirements=No
ShowClss=No
DeftAttr=int
DeftMthd=int
DeftParm=int
DeftCont=java.util.Collection
DomnDttp=Yes
DomnChck=No
DomnRule=No
SupportDelay=No
PreviewEditable=Yes
AutoRealize=No
DttpFullName=Yes
DeftClssAttrVisi=private
VBNetPreprocessingSymbols=
CSharpPreprocessingSymbols=

[ModelOptions\Cld\NamingOptionsTemplates]

[ModelOptions\Cld\ClssNamingOptions]

[ModelOptions\Cld\ClssNamingOptions\CLDPCKG]

[ModelOptions\Cld\ClssNamingOptions\CLDPCKG\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,,,firstLowerWord)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\CLDPCKG\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\CLDDOMN]

[ModelOptions\Cld\ClssNamingOptions\CLDDOMN\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\CLDDOMN\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\CLDCLASS]

[ModelOptions\Cld\ClssNamingOptions\CLDCLASS\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,,,FirstUpperChar)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\CLDCLASS\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\CLDINTF]

[ModelOptions\Cld\ClssNamingOptions\CLDINTF\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,,,FirstUpperChar)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\CLDINTF\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\UCDACTR]

[ModelOptions\Cld\ClssNamingOptions\UCDACTR\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\UCDACTR\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\UCDUCAS]

[ModelOptions\Cld\ClssNamingOptions\UCDUCAS\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\UCDUCAS\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\SQDOBJT]

[ModelOptions\Cld\ClssNamingOptions\SQDOBJT\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\SQDOBJT\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\SQDMSSG]

[ModelOptions\Cld\ClssNamingOptions\SQDMSSG\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\SQDMSSG\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\CPDCOMP]

[ModelOptions\Cld\ClssNamingOptions\CPDCOMP\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,,,FirstUpperChar)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\CPDCOMP\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\CLDATTR]

[ModelOptions\Cld\ClssNamingOptions\CLDATTR\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,,,firstLowerWord)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\CLDATTR\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\CLDMETHOD]

[ModelOptions\Cld\ClssNamingOptions\CLDMETHOD\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,,,firstLowerWord)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\CLDMETHOD\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\CLDPARM]

[ModelOptions\Cld\ClssNamingOptions\CLDPARM\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,,,firstLowerWord)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\CLDPARM\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\OOMPORT]

[ModelOptions\Cld\ClssNamingOptions\OOMPORT\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\OOMPORT\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\OOMPART]

[ModelOptions\Cld\ClssNamingOptions\OOMPART\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\OOMPART\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\CLDASSC]

[ModelOptions\Cld\ClssNamingOptions\CLDASSC\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,,,firstLowerWord)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\CLDASSC\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\UCDASSC]

[ModelOptions\Cld\ClssNamingOptions\UCDASSC\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\UCDASSC\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\GNRLLINK]

[ModelOptions\Cld\ClssNamingOptions\GNRLLINK\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\GNRLLINK\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\RQLINK]

[ModelOptions\Cld\ClssNamingOptions\RQLINK\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\RQLINK\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\RLZSLINK]

[ModelOptions\Cld\ClssNamingOptions\RLZSLINK\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\RLZSLINK\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\DEPDLINK]

[ModelOptions\Cld\ClssNamingOptions\DEPDLINK\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\DEPDLINK\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\OOMACTV]

[ModelOptions\Cld\ClssNamingOptions\OOMACTV\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\OOMACTV\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\ACDOBST]

[ModelOptions\Cld\ClssNamingOptions\ACDOBST\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\ACDOBST\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\STAT]

[ModelOptions\Cld\ClssNamingOptions\STAT\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\STAT\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\DPDNODE]

[ModelOptions\Cld\ClssNamingOptions\DPDNODE\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\DPDNODE\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\DPDCMPI]

[ModelOptions\Cld\ClssNamingOptions\DPDCMPI\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\DPDCMPI\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\DPDASSC]

[ModelOptions\Cld\ClssNamingOptions\DPDASSC\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\DPDASSC\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\OOMVAR]

[ModelOptions\Cld\ClssNamingOptions\OOMVAR\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\OOMVAR\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\FILO]

[ModelOptions\Cld\ClssNamingOptions\FILO\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=&quot;\/:*?&lt;&gt;|&quot;
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\FILO\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_. &quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\FRMEOBJ]

[ModelOptions\Cld\ClssNamingOptions\FRMEOBJ\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\FRMEOBJ\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\FRMELNK]

[ModelOptions\Cld\ClssNamingOptions\FRMELNK\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\FRMELNK\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\DefaultClass]

[ModelOptions\Cld\ClssNamingOptions\DefaultClass\Name]
Template=
MaxLen=254
Case=M
ValidChar=
InvldChar=
AllValid=Yes
NoAccent=No
DefaultChar=_
Script=.convert_name(%Name%,&quot;_&quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Cld\ClssNamingOptions\DefaultClass\Code]
Template=
MaxLen=254
Case=M
ValidChar=&#39;a&#39;-&#39;z&#39;,&#39;A&#39;-&#39;Z&#39;,&#39;0&#39;-&#39;9&#39;,&quot;_&quot;
InvldChar=&quot; &#39;(.)+=*/&quot;
AllValid=Yes
NoAccent=Yes
DefaultChar=_
Script=.convert_code(%Code%,&quot; &quot;)
ConvTable=
ConvTablePath=%_HOME%\Fichiers de ressources\Tables de conversion

[ModelOptions\Generate]

[ModelOptions\Generate\Cdm]
CheckModel=Yes
SaveLinks=Yes
NameToCode=No
Notation=2

[ModelOptions\Generate\Pdm]
CheckModel=Yes
SaveLinks=Yes
ORMapping=No
NameToCode=No
BuildTrgr=No
TablePrefix=
RefrUpdRule=RESTRICT
RefrDelRule=RESTRICT
IndxPKName=%TABLE%_PK
IndxAKName=%TABLE%_AK
IndxFKName=%REFR%_FK
IndxThreshold=
ColnFKName=%.3:PARENT%_%COLUMN%
ColnFKNameUse=No

[ModelOptions\Generate\Xsm]
CheckModel=Yes
SaveLinks=Yes
ORMapping=No
NameToCode=No</a:ModelOptionsText>
<c:ObjectLanguage>
<o:Shortcut Id="o3">
<a:ObjectID>78517C9B-4624-4412-BEFF-13576826709E</a:ObjectID>
<a:Name>Java</a:Name>
<a:Code>Java</a:Code>
<a:CreationDate>1382223287</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382223287</a:ModificationDate>
<a:Modifier>coucou</a:Modifier>
<a:TargetStereotype/>
<a:TargetID>0DEDDB90-46E2-45A0-886E-411709DA0DC9</a:TargetID>
<a:TargetClassID>1811206C-1A4B-11D1-83D9-444553540000</a:TargetClassID>
</o:Shortcut>
</c:ObjectLanguage>
<c:ExtendedModelDefinitions>
<o:Shortcut Id="o4">
<a:ObjectID>856292C0-F927-446E-82E0-A97DC7F69237</a:ObjectID>
<a:Name>WSDL for Java</a:Name>
<a:Code>WSDLJava</a:Code>
<a:CreationDate>1382223287</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382223287</a:ModificationDate>
<a:Modifier>coucou</a:Modifier>
<a:TargetStereotype/>
<a:TargetID>C8F5F7B2-CF9D-4E98-8301-959BB6E86C8A</a:TargetID>
<a:TargetClassID>186C8AC3-D3DC-11D3-881C-00508B03C75C</a:TargetClassID>
</o:Shortcut>
</c:ExtendedModelDefinitions>
<c:DefaultDiagram>
<o:SequenceDiagram Ref="o5"/>
</c:DefaultDiagram>
<c:SequenceDiagrams>
<o:SequenceDiagram Id="o5">
<a:ObjectID>A270CF00-2067-4217-AEDC-7803ABEDA1BF</a:ObjectID>
<a:Name>DiagrammeSequence_1</a:Name>
<a:Code>DiagrammeSequence_1</a:Code>
<a:CreationDate>1382223287</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382351601</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<a:DisplayPreferences>[DisplayPreferences]

[DisplayPreferences\SQD]

[DisplayPreferences\General]
Adjust to text=Yes
Snap Grid=No
Constrain Labels=Yes
Display Grid=No
Show Page Delimiter=Yes
Grid size=0
Graphic unit=2
Window color=255, 255, 255
Background image=
Background mode=8
Watermark image=
Watermark mode=8
Show watermark on screen=No
Gradient mode=0
Gradient end color=255, 255, 255
Show Swimlane=No
SwimlaneVert=Yes
TreeVert=No
CompDark=0

[DisplayPreferences\Object]
Mode=0
Trunc Length=80
Word Length=80
Word Text=!&quot;&quot;#$%&amp;&#39;()*+,-./:;&lt;=&gt;?@[\]^_`{|}~
Shortcut IntIcon=Yes
Shortcut IntLoct=Yes
Shortcut IntFullPath=No
Shortcut IntLastPackage=Yes
Shortcut ExtIcon=Yes
Shortcut ExtLoct=No
Shortcut ExtFullPath=No
Shortcut ExtLastPackage=Yes
Shortcut ExtIncludeModl=Yes
EObjShowStrn=Yes
ExtendedObject.Comment=No
ExtendedObject.IconPicture=No
ExtendedObject_SymbolLayout=
ELnkShowStrn=Yes
ELnkShowName=Yes
ExtendedLink_SymbolLayout=
FileObject.Stereotype=No
FileObject.DisplayName=Yes
FileObject.LocationOrName=No
FileObject.IconPicture=No
FileObject.IconMode=Yes
FileObject_SymbolLayout=
PckgShowStrn=Yes
Package.Comment=No
Package.IconPicture=No
Package_SymbolLayout=
Display Model Version=Yes
InteractionSymbol.IconPicture=No
InteractionSymbol_SymbolLayout=
UMLObject.IconPicture=No
UMLObject_SymbolLayout=
ActivationSymbol.IconPicture=No
ActivationSymbol_SymbolLayout=
Actor.IconPicture=No
Actor_SymbolLayout=
InteractionReference.IconPicture=No
InteractionReference_SymbolLayout=
InteractionFragment.IconPicture=No
InteractionFragment_SymbolLayout=
ActrShowStrn=Yes
ObjtShowStrn=Yes
ObjtShowHead=Yes
MssgShowName=Yes
MssgShowStrn=Yes
MssgShowTime=Yes
MssgShowCond=Yes
MssgShowMthd=Yes
MssgShowSign=Yes
MssgShowActv=No
IRefShowStrn=Yes
FragShowLife=Yes
ShowIntrSym=Yes

[DisplayPreferences\Symbol]

[DisplayPreferences\Symbol\FRMEOBJ]
STRNFont=Arial,8,N
STRNFont color=0, 0, 0
DISPNAMEFont=Arial,8,N
DISPNAMEFont color=0, 0, 0
LABLFont=Arial,8,N
LABLFont color=0, 0, 0
AutoAdjustToText=Yes
Keep aspect=No
Keep center=No
Keep size=No
Width=6000
Height=2000
Brush color=255 255 255
Fill Color=Yes
Brush style=6
Brush bitmap mode=12
Brush gradient mode=64
Brush gradient color=192 192 192
Brush background image=
Custom shape=
Custom text mode=0
Pen=1 0 255 128 128
Shadow color=192 192 192
Shadow=0

[DisplayPreferences\Symbol\FRMELNK]
CENTERFont=Arial,8,N
CENTERFont color=0, 0, 0
Line style=2
AutoAdjustToText=Yes
Keep aspect=No
Keep center=No
Keep size=No
Brush color=255 255 255
Fill Color=Yes
Brush style=1
Brush bitmap mode=12
Brush gradient mode=0
Brush gradient color=118 118 118
Brush background image=
Custom shape=
Custom text mode=0
Pen=1 0 128 128 255
Shadow color=192 192 192
Shadow=0

[DisplayPreferences\Symbol\FILO]
OBJSTRNFont=Arial,8,N
OBJSTRNFont color=0, 0, 0
DISPNAMEFont=Arial,8,N
DISPNAMEFont color=0, 0, 0
LCNMFont=Arial,8,N
LCNMFont color=0, 0, 0
AutoAdjustToText=Yes
Keep aspect=Yes
Keep center=Yes
Keep size=No
Width=2400
Height=2400
Brush color=255 255 255
Fill Color=No
Brush style=1
Brush bitmap mode=12
Brush gradient mode=0
Brush gradient color=118 118 118
Brush background image=
Custom shape=
Custom text mode=0
Pen=1 0 0 0 255
Shadow color=192 192 192
Shadow=-1

[DisplayPreferences\Symbol\CLDPCKG]
STRNFont=Arial,8,N
STRNFont color=0 0 0
DISPNAMEFont=Arial,8,N
DISPNAMEFont color=0 0 0
LABLFont=Arial,8,N
LABLFont color=0 0 0
AutoAdjustToText=Yes
Keep aspect=No
Keep center=No
Keep size=No
Width=4800
Height=3600
Brush color=255 255 192
Fill Color=Yes
Brush style=6
Brush bitmap mode=12
Brush gradient mode=65
Brush gradient color=255 255 255
Brush background image=
Custom shape=
Custom text mode=0
Pen=1 0 178 178 178
Shadow color=192 192 192
Shadow=0

[DisplayPreferences\Symbol\SINT]
DISPNAMEFont=Arial,8,N
DISPNAMEFont color=0 0 0
AutoAdjustToText=Yes
Keep aspect=No
Keep center=No
Keep size=No
Width=22000
Height=28800
Brush color=255 255 255
Fill Color=No
Brush style=4
Brush bitmap mode=12
Brush gradient mode=0
Brush gradient color=118 118 118
Brush background image=
Custom shape=
Custom text mode=0
Pen=1 0 208 208 232
Shadow color=192 192 192
Shadow=0

[DisplayPreferences\Symbol\SQDOBJT]
OBJSTRNFont=Arial,8,N
OBJSTRNFont color=0 0 0
DISPNAMEFont=Arial,8,U
DISPNAMEFont color=0 0 0
AutoAdjustToText=Yes
Keep aspect=No
Keep center=No
Keep size=No
Width=4800
Height=3600
Brush color=233 202 131
Fill Color=Yes
Brush style=6
Brush bitmap mode=12
Brush gradient mode=65
Brush gradient color=255 255 255
Brush background image=
Custom shape=
Custom text mode=0
Pen=1 0 255 128 0
Shadow color=192 192 192
Shadow=0

[DisplayPreferences\Symbol\ACTVSYM]
AutoAdjustToText=Yes
Keep aspect=No
Keep center=No
Keep size=No
Width=900
Height=2400
Brush color=250 241 211
Fill Color=Yes
Brush style=6
Brush bitmap mode=12
Brush gradient mode=65
Brush gradient color=255 255 255
Brush background image=
Custom shape=
Custom text mode=0
Pen=1 0 0 0 128
Shadow color=192 192 192
Shadow=0

[DisplayPreferences\Symbol\UCDACTR]
STRNFont=Arial,8,N
STRNFont color=0 0 0
DISPNAMEFont=Arial,8,N
DISPNAMEFont color=0 0 0
AutoAdjustToText=Yes
Keep aspect=No
Keep center=No
Keep size=No
Width=4800
Height=3600
Brush color=255 255 192
Fill Color=Yes
Brush style=6
Brush bitmap mode=12
Brush gradient mode=65
Brush gradient color=255 255 255
Brush background image=
Custom shape=
Custom text mode=0
Pen=1 0 128 0 0
Shadow color=192 192 192
Shadow=0

[DisplayPreferences\Symbol\IREF]
STRNFont=Arial,8,N
STRNFont color=0 0 0
DISPNAMEFont=Arial,8,N
DISPNAMEFont color=0 0 0
AutoAdjustToText=Yes
Keep aspect=No
Keep center=No
Keep size=No
Width=4800
Height=3600
Brush color=250 241 211
Fill Color=Yes
Brush style=6
Brush bitmap mode=12
Brush gradient mode=1031
Brush gradient color=255 255 255
Brush background image=
Custom shape=
Custom text mode=0
Pen=1 0 208 208 232
Shadow color=192 192 192
Shadow=0

[DisplayPreferences\Symbol\IFRG]
KWRDFont=Arial,8,N
KWRDFont color=0 0 0
AutoAdjustToText=Yes
Keep aspect=No
Keep center=No
Keep size=No
Width=4800
Height=3600
Brush color=255 255 255
Fill Color=Yes
Brush style=4
Brush bitmap mode=12
Brush gradient mode=65
Brush gradient color=208 208 232
Brush background image=
Custom shape=
Custom text mode=0
Pen=1 150 128 0 0
Shadow color=192 192 192
Shadow=0

[DisplayPreferences\Symbol\SQDMSSG]
DISPNAMEFont=Arial,8,N
DISPNAMEFont color=0 0 0
BTIMFont=Arial,8,N
BTIMFont color=0 0 0
ETIMFont=Arial,8,N
ETIMFont color=0 0 0
Line style=2
Pen=1 0 128 0 0
Shadow color=192 192 192
Shadow=0

[DisplayPreferences\Symbol\USRDEPD]
OBJXSTRFont=Arial,8,N
OBJXSTRFont color=0 0 0
Line style=2
AutoAdjustToText=Yes
Keep aspect=No
Keep center=No
Keep size=No
Brush color=255 255 255
Fill Color=Yes
Brush style=1
Brush bitmap mode=12
Brush gradient mode=0
Brush gradient color=118 118 118
Brush background image=
Custom shape=
Custom text mode=0
Pen=2 0 128 0 0
Shadow color=192 192 192
Shadow=0

[DisplayPreferences\Symbol\Free Symbol]
Free TextFont=Arial,8,N
Free TextFont color=0 0 0
Line style=2
AutoAdjustToText=Yes
Keep aspect=No
Keep center=No
Keep size=No
Brush color=255 255 255
Fill Color=Yes
Brush style=1
Brush bitmap mode=12
Brush gradient mode=0
Brush gradient color=118 118 118
Brush background image=
Custom shape=
Custom text mode=0
Pen=1 0 128 0 0
Shadow color=192 192 192
Shadow=0</a:DisplayPreferences>
<a:PaperSize>(8268, 11693)</a:PaperSize>
<a:PageMargins>((315,354), (433,354))</a:PageMargins>
<a:PageOrientation>1</a:PageOrientation>
<a:PaperSource>276</a:PaperSource>
<c:Symbols>
<o:InteractionSymbol Id="o6">
<a:ModificationDate>1382350019</a:ModificationDate>
<a:Rect>((-23840,-27549), (24098,19912))</a:Rect>
<a:AutoAdjustToText>0</a:AutoAdjustToText>
<a:BaseSymbol.Flags>4</a:BaseSymbol.Flags>
<a:LineColor>15257808</a:LineColor>
<a:FillColor>16777215</a:FillColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N</a:FontList>
<a:BrushStyle>4</a:BrushStyle>
<a:ManuallyResized>1</a:ManuallyResized>
<c:Object>
<o:SequenceDiagram Ref="o5"/>
</c:Object>
</o:InteractionSymbol>
<o:MessageSymbol Id="o7">
<a:CreationDate>1382351601</a:CreationDate>
<a:ModificationDate>1382351601</a:ModificationDate>
<a:Rect>((12598,-1110), (20698,422))</a:Rect>
<a:ListOfPoints>((12598,-810),(20698,-810))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o8"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o9"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o10"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o11">
<a:CreationDate>1382351522</a:CreationDate>
<a:ModificationDate>1382351545</a:ModificationDate>
<a:CenterTextOffset>(-60, -60)</a:CenterTextOffset>
<a:Rect>((-6781,-870), (3418,602))</a:Rect>
<a:ListOfPoints>((3418,-570),(-6781,-570))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o13"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o14"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o15">
<a:CreationDate>1382351404</a:CreationDate>
<a:ModificationDate>1382351465</a:ModificationDate>
<a:Rect>((-14401,6570), (3418,8102))</a:Rect>
<a:ListOfPoints>((3418,6870),(-14401,6870))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o16"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o17"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o18">
<a:CreationDate>1382351286</a:CreationDate>
<a:ModificationDate>1382351453</a:ModificationDate>
<a:Rect>((3418,1170), (12598,2702))</a:Rect>
<a:ListOfPoints>((12598,1470),(3418,1470))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o8"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o19"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o20">
<a:CreationDate>1382351074</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((3418,-11010), (20698,-9478))</a:Rect>
<a:ListOfPoints>((20698,-10710),(3418,-10710))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o9"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o21"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o22">
<a:CreationDate>1382350835</a:CreationDate>
<a:ModificationDate>1382351510</a:ModificationDate>
<a:Rect>((-6781,510), (3418,2042))</a:Rect>
<a:ListOfPoints>((3418,810),(-6781,810))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o13"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o23"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o24">
<a:CreationDate>1382350774</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((-14401,-14490), (3418,-12958))</a:Rect>
<a:ListOfPoints>((3418,-14190),(-14401,-14190))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o16"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o25"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o26">
<a:CreationDate>1382350747</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((-14401,-10950), (3418,-9418))</a:Rect>
<a:ListOfPoints>((3418,-10650),(-14401,-10650))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o16"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o27"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o28">
<a:CreationDate>1382350700</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((-14401,-7290), (3418,-5758))</a:Rect>
<a:ListOfPoints>((3418,-6990),(-14401,-6990))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o16"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o29"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o30">
<a:CreationDate>1382350659</a:CreationDate>
<a:ModificationDate>1382351538</a:ModificationDate>
<a:Rect>((-6781,-2490), (3418,-958))</a:Rect>
<a:ListOfPoints>((3418,-2190),(-6781,-2190))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o13"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o31"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o32">
<a:CreationDate>1382350636</a:CreationDate>
<a:ModificationDate>1382351318</a:ModificationDate>
<a:Rect>((-6781,1890), (3418,3422))</a:Rect>
<a:ListOfPoints>((3418,2190),(-6781,2190))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o13"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o33"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o34">
<a:CreationDate>1382350548</a:CreationDate>
<a:ModificationDate>1382351457</a:ModificationDate>
<a:Rect>((-6781,3690), (3418,5222))</a:Rect>
<a:ListOfPoints>((3418,3990),(-6781,3990))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o13"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o35"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o36">
<a:CreationDate>1382350529</a:CreationDate>
<a:ModificationDate>1382351460</a:ModificationDate>
<a:Rect>((-6781,5130), (3418,6662))</a:Rect>
<a:ListOfPoints>((3418,5430),(-6781,5430))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o13"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o37"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o38">
<a:CreationDate>1382350491</a:CreationDate>
<a:ModificationDate>1382351467</a:ModificationDate>
<a:Rect>((-6781,7830), (3418,9362))</a:Rect>
<a:ListOfPoints>((3418,8130),(-6781,8130))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o13"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o39"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o40">
<a:CreationDate>1382350410</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((-14401,9090), (3418,10622))</a:Rect>
<a:ListOfPoints>((3418,9390),(-14401,9390))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o16"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o41"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o42">
<a:CreationDate>1382350382</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((-14401,10530), (3418,12062))</a:Rect>
<a:ListOfPoints>((3418,10830),(-14401,10830))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o16"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o43"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o44">
<a:CreationDate>1382350291</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((-21480,-12690), (-14401,-11158))</a:Rect>
<a:ListOfPoints>((-21480,-12390),(-14401,-12390))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:ActorSequenceSymbol Ref="o45"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o16"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o46"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o47">
<a:CreationDate>1382350212</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((-21480,-9090), (-14401,-7558))</a:Rect>
<a:ListOfPoints>((-21480,-8790),(-14401,-8790))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:ActorSequenceSymbol Ref="o45"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o16"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o48"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o49">
<a:CreationDate>1382350176</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((-21480,-4110), (-14401,-2578))</a:Rect>
<a:ListOfPoints>((-21480,-3810),(-14401,-3810))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:ActorSequenceSymbol Ref="o45"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o16"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o50"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o51">
<a:CreationDate>1382350142</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((-21480,3390), (-14401,4922))</a:Rect>
<a:ListOfPoints>((-21480,3690),(-14401,3690))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:ActorSequenceSymbol Ref="o45"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o16"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o52"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o53">
<a:CreationDate>1382350112</a:CreationDate>
<a:ModificationDate>1382351384</a:ModificationDate>
<a:Rect>((-21480,7710), (-14401,9242))</a:Rect>
<a:ListOfPoints>((-21480,8010),(-14401,8010))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:ActorSequenceSymbol Ref="o45"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o16"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o54"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o55">
<a:CreationDate>1382350067</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((-21480,9390), (-14401,10922))</a:Rect>
<a:ListOfPoints>((-21480,9690),(-14401,9690))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:ActorSequenceSymbol Ref="o45"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o16"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o56"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o57">
<a:CreationDate>1382223972</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((12598,-2790), (20698,-1258))</a:Rect>
<a:ListOfPoints>((20698,-2490),(12598,-2490))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o9"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o8"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o58"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o59">
<a:CreationDate>1382223857</a:CreationDate>
<a:ModificationDate>1382351444</a:ModificationDate>
<a:Rect>((-6781,-5370), (3418,-3838))</a:Rect>
<a:ListOfPoints>((3418,-5070),(-6781,-5070))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o13"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o60"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o61">
<a:CreationDate>1382223852</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((3418,-13230), (12598,-11698))</a:Rect>
<a:ListOfPoints>((3418,-12930),(12598,-12930))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o8"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o62"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o63">
<a:CreationDate>1382223827</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((12598,-5130), (20698,-3598))</a:Rect>
<a:ListOfPoints>((12598,-4830),(20698,-4830))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o8"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o9"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o64"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o65">
<a:CreationDate>1382223813</a:CreationDate>
<a:ModificationDate>1382351327</a:ModificationDate>
<a:CenterTextOffset>(-60, 360)</a:CenterTextOffset>
<a:Rect>((3418,3150), (12598,5042))</a:Rect>
<a:ListOfPoints>((3418,3450),(12598,3450))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o8"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o66"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o67">
<a:CreationDate>1382223786</a:CreationDate>
<a:ModificationDate>1382351535</a:ModificationDate>
<a:Rect>((-6781,-4170), (3418,-2638))</a:Rect>
<a:ListOfPoints>((-6781,-3870),(3418,-3870))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o13"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o68"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o69">
<a:CreationDate>1382223778</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:CenterTextOffset>(-60, 480)</a:CenterTextOffset>
<a:Rect>((12598,690), (20698,2702))</a:Rect>
<a:ListOfPoints>((20698,990),(12598,990))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o9"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o8"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o70"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o71">
<a:CreationDate>1382223772</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:CenterTextOffset>(-60, 360)</a:CenterTextOffset>
<a:Rect>((12598,5010), (20698,6902))</a:Rect>
<a:ListOfPoints>((12598,5310),(20698,5310))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o8"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o9"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o72"/>
</c:Object>
</o:MessageSymbol>
<o:MessageSymbol Id="o73">
<a:CreationDate>1382223770</a:CreationDate>
<a:ModificationDate>1382351339</a:ModificationDate>
<a:Rect>((3418,6030), (12598,7562))</a:Rect>
<a:ListOfPoints>((3418,6330),(12598,6330))</a:ListOfPoints>
<a:CornerStyle>2</a:CornerStyle>
<a:ArrowStyle>8</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>DISPNAME 0 Arial,8,N
BTIM 0 Arial,8,N
ETIM 0 Arial,8,N</a:FontList>
<c:SourceSymbol>
<o:UMLObjectSequenceSymbol Ref="o12"/>
</c:SourceSymbol>
<c:DestinationSymbol>
<o:UMLObjectSequenceSymbol Ref="o8"/>
</c:DestinationSymbol>
<c:Object>
<o:Message Ref="o74"/>
</c:Object>
</o:MessageSymbol>
<o:UMLObjectSequenceSymbol Id="o12">
<a:CreationDate>1382223302</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((1019,12330), (5818,15929))</a:Rect>
<a:LineColor>33023</a:LineColor>
<a:FillColor>8637161</a:FillColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>OBJSTRN 0 Arial,8,N
DISPNAME 0 Arial,8,U</a:FontList>
<a:BrushStyle>6</a:BrushStyle>
<a:GradientFillMode>65</a:GradientFillMode>
<a:GradientEndColor>16777215</a:GradientEndColor>
<c:SlaveSubSymbols>
<o:LifelineSymbol Id="o75">
<a:ModificationDate>1382351286</a:ModificationDate>
<a:Rect>((3418,-18690), (3518,12330))</a:Rect>
<a:ListOfPoints>((3418,12330),(3418,-18690))</a:ListOfPoints>
<a:ArrowStyle>0</a:ArrowStyle>
<a:LineColor>33023</a:LineColor>
<a:DashStyle>3</a:DashStyle>
<a:ShadowColor>8421504</a:ShadowColor>
</o:LifelineSymbol>
</c:SlaveSubSymbols>
<c:Object>
<o:UMLObject Ref="o76"/>
</c:Object>
</o:UMLObjectSequenceSymbol>
<o:UMLObjectSequenceSymbol Id="o13">
<a:CreationDate>1382223347</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((-9181,12330), (-4382,15929))</a:Rect>
<a:LineColor>33023</a:LineColor>
<a:FillColor>8637161</a:FillColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>OBJSTRN 0 Arial,8,N
DISPNAME 0 Arial,8,U</a:FontList>
<a:BrushStyle>6</a:BrushStyle>
<a:GradientFillMode>65</a:GradientFillMode>
<a:GradientEndColor>16777215</a:GradientEndColor>
<c:SlaveSubSymbols>
<o:LifelineSymbol Id="o77">
<a:ModificationDate>1382351286</a:ModificationDate>
<a:Rect>((-6781,-18690), (-6681,12330))</a:Rect>
<a:ListOfPoints>((-6781,12330),(-6781,-18690))</a:ListOfPoints>
<a:ArrowStyle>0</a:ArrowStyle>
<a:LineColor>33023</a:LineColor>
<a:DashStyle>3</a:DashStyle>
<a:ShadowColor>8421504</a:ShadowColor>
</o:LifelineSymbol>
</c:SlaveSubSymbols>
<c:Object>
<o:UMLObject Ref="o78"/>
</c:Object>
</o:UMLObjectSequenceSymbol>
<o:UMLObjectSequenceSymbol Id="o8">
<a:CreationDate>1382223348</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((10199,12330), (14998,15929))</a:Rect>
<a:LineColor>33023</a:LineColor>
<a:FillColor>8637161</a:FillColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>OBJSTRN 0 Arial,8,N
DISPNAME 0 Arial,8,U</a:FontList>
<a:BrushStyle>6</a:BrushStyle>
<a:GradientFillMode>65</a:GradientFillMode>
<a:GradientEndColor>16777215</a:GradientEndColor>
<c:SlaveSubSymbols>
<o:LifelineSymbol Id="o79">
<a:ModificationDate>1382351286</a:ModificationDate>
<a:Rect>((12598,-18690), (12698,12330))</a:Rect>
<a:ListOfPoints>((12598,12330),(12598,-18690))</a:ListOfPoints>
<a:ArrowStyle>0</a:ArrowStyle>
<a:LineColor>33023</a:LineColor>
<a:DashStyle>3</a:DashStyle>
<a:ShadowColor>8421504</a:ShadowColor>
</o:LifelineSymbol>
</c:SlaveSubSymbols>
<c:Object>
<o:UMLObject Ref="o80"/>
</c:Object>
</o:UMLObjectSequenceSymbol>
<o:UMLObjectSequenceSymbol Id="o9">
<a:CreationDate>1382223349</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((18299,12330), (23098,15929))</a:Rect>
<a:LineColor>33023</a:LineColor>
<a:FillColor>8637161</a:FillColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>OBJSTRN 0 Arial,8,N
DISPNAME 0 Arial,8,U</a:FontList>
<a:BrushStyle>6</a:BrushStyle>
<a:GradientFillMode>65</a:GradientFillMode>
<a:GradientEndColor>16777215</a:GradientEndColor>
<c:SlaveSubSymbols>
<o:LifelineSymbol Id="o81">
<a:ModificationDate>1382351286</a:ModificationDate>
<a:Rect>((20698,-18690), (20798,12330))</a:Rect>
<a:ListOfPoints>((20698,12330),(20698,-18690))</a:ListOfPoints>
<a:ArrowStyle>0</a:ArrowStyle>
<a:LineColor>33023</a:LineColor>
<a:DashStyle>3</a:DashStyle>
<a:ShadowColor>8421504</a:ShadowColor>
</o:LifelineSymbol>
</c:SlaveSubSymbols>
<c:Object>
<o:UMLObject Ref="o82"/>
</c:Object>
</o:UMLObjectSequenceSymbol>
<o:UMLObjectSequenceSymbol Id="o16">
<a:CreationDate>1382350008</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:Rect>((-16801,12330), (-12002,15929))</a:Rect>
<a:LineColor>33023</a:LineColor>
<a:FillColor>8637161</a:FillColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>OBJSTRN 0 Arial,8,N
DISPNAME 0 Arial,8,U</a:FontList>
<a:BrushStyle>6</a:BrushStyle>
<a:GradientFillMode>65</a:GradientFillMode>
<a:GradientEndColor>16777215</a:GradientEndColor>
<c:SlaveSubSymbols>
<o:LifelineSymbol Id="o83">
<a:ModificationDate>1382351286</a:ModificationDate>
<a:Rect>((-14401,-18690), (-14301,12330))</a:Rect>
<a:ListOfPoints>((-14401,12330),(-14401,-18690))</a:ListOfPoints>
<a:ArrowStyle>0</a:ArrowStyle>
<a:LineColor>33023</a:LineColor>
<a:DashStyle>3</a:DashStyle>
<a:ShadowColor>8421504</a:ShadowColor>
</o:LifelineSymbol>
</c:SlaveSubSymbols>
<c:Object>
<o:UMLObject Ref="o84"/>
</c:Object>
</o:UMLObjectSequenceSymbol>
<o:ActorSequenceSymbol Id="o45">
<a:CreationDate>1382350014</a:CreationDate>
<a:ModificationDate>1382351263</a:ModificationDate>
<a:IconMode>-1</a:IconMode>
<a:Rect>((-23880,12330), (-19081,15929))</a:Rect>
<a:LineColor>128</a:LineColor>
<a:FillColor>12648447</a:FillColor>
<a:ShadowColor>12632256</a:ShadowColor>
<a:FontList>STRN 0 Arial,8,N
DISPNAME 0 Arial,8,N</a:FontList>
<a:BrushStyle>6</a:BrushStyle>
<a:GradientFillMode>65</a:GradientFillMode>
<a:GradientEndColor>16777215</a:GradientEndColor>
<c:SlaveSubSymbols>
<o:LifelineSymbol Id="o85">
<a:ModificationDate>1382351286</a:ModificationDate>
<a:Rect>((-21480,-18690), (-21380,12330))</a:Rect>
<a:ListOfPoints>((-21480,12330),(-21480,-18690))</a:ListOfPoints>
<a:ArrowStyle>0</a:ArrowStyle>
<a:LineColor>128</a:LineColor>
<a:DashStyle>3</a:DashStyle>
<a:ShadowColor>8421504</a:ShadowColor>
</o:LifelineSymbol>
</c:SlaveSubSymbols>
<c:Object>
<o:Actor Ref="o86"/>
</c:Object>
</o:ActorSequenceSymbol>
</c:Symbols>
</o:SequenceDiagram>
</c:SequenceDiagrams>
<c:Actors>
<o:Actor Id="o86">
<a:ObjectID>CE61EE29-C073-44D2-8A5E-B43E45FB5E73</a:ObjectID>
<a:Name>Player</a:Name>
<a:Code>Player</a:Code>
<a:CreationDate>1382350014</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350044</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
</o:Actor>
</c:Actors>
<c:Model.Objects>
<o:UMLObject Id="o76">
<a:ObjectID>319689C8-0E38-4FEF-A8ED-C087DFD061D1</a:ObjectID>
<a:Name>Core</a:Name>
<a:Code>Core</a:Code>
<a:CreationDate>1382223302</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382223362</a:ModificationDate>
<a:Modifier>coucou</a:Modifier>
</o:UMLObject>
<o:UMLObject Id="o78">
<a:ObjectID>B62A59B5-2F73-4C8F-B570-405800E4F153</a:ObjectID>
<a:Name>Display</a:Name>
<a:Code>Display</a:Code>
<a:CreationDate>1382223347</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382223369</a:ModificationDate>
<a:Modifier>coucou</a:Modifier>
</o:UMLObject>
<o:UMLObject Id="o80">
<a:ObjectID>4FE5B5EC-FCBD-47BB-AB0E-272849FE74F4</a:ObjectID>
<a:Name>Parser</a:Name>
<a:Code>Parser</a:Code>
<a:CreationDate>1382223348</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382223385</a:ModificationDate>
<a:Modifier>coucou</a:Modifier>
</o:UMLObject>
<o:UMLObject Id="o82">
<a:ObjectID>885C681C-AB18-4FED-BD36-A73E32C85EE6</a:ObjectID>
<a:Name>Isocket</a:Name>
<a:Code>Isocket</a:Code>
<a:CreationDate>1382223349</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382224174</a:ModificationDate>
<a:Modifier>coucou</a:Modifier>
</o:UMLObject>
<o:UMLObject Id="o84">
<a:ObjectID>1DA90805-4292-4629-A572-CFC056B15D7C</a:ObjectID>
<a:Name>Menu</a:Name>
<a:Code>Menu</a:Code>
<a:CreationDate>1382350008</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350315</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
</o:UMLObject>
</c:Model.Objects>
<c:Messages>
<o:Message Id="o74">
<a:ObjectID>9A95B877-1796-41AC-9EDE-D862E14D2C38</a:ObjectID>
<a:Name>Create</a:Name>
<a:Code>Create</a:Code>
<a:CreationDate>1382223770</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382223930</a:ModificationDate>
<a:Modifier>coucou</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o80"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o76"/>
</c:Object2>
</o:Message>
<o:Message Id="o72">
<a:ObjectID>794F2005-D53D-4C46-87E3-4EA836EE9363</a:ObjectID>
<a:Name>Connection</a:Name>
<a:Code>Connection</a:Code>
<a:CreationDate>1382223772</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382223936</a:ModificationDate>
<a:Modifier>coucou</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o82"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o80"/>
</c:Object2>
</o:Message>
<o:Message Id="o70">
<a:ObjectID>153D79D1-FD7E-4117-99BF-BBF1D5E3D4E6</a:ObjectID>
<a:Name>Acceptation</a:Name>
<a:Code>Acceptation</a:Code>
<a:CreationDate>1382223778</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382223941</a:ModificationDate>
<a:Modifier>coucou</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o80"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o82"/>
</c:Object2>
</o:Message>
<o:Message Id="o68">
<a:ObjectID>390F95E6-9A71-4216-8EC3-08242CA9D530</a:ObjectID>
<a:Name>inputs</a:Name>
<a:Code>inputs</a:Code>
<a:CreationDate>1382223786</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382223985</a:ModificationDate>
<a:Modifier>coucou</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o76"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o78"/>
</c:Object2>
</o:Message>
<o:Message Id="o66">
<a:ObjectID>5EFE9D80-D536-41EE-969D-37DF69F922F5</a:ObjectID>
<a:Name>GetStr()</a:Name>
<a:Code>GetStr__</a:Code>
<a:CreationDate>1382223813</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382350900</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o80"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o76"/>
</c:Object2>
</o:Message>
<o:Message Id="o64">
<a:ObjectID>E46CB889-E8CF-4120-A023-6D486C25EE50</a:ObjectID>
<a:Name>Send</a:Name>
<a:Code>Send</a:Code>
<a:CreationDate>1382223827</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382223963</a:ModificationDate>
<a:Modifier>coucou</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o82"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o80"/>
</c:Object2>
</o:Message>
<o:Message Id="o87">
<a:ObjectID>5FA8E583-D60F-46A9-945A-0B0EA4564530</a:ObjectID>
<a:Name>Message_10</a:Name>
<a:Code>Message_10</a:Code>
<a:CreationDate>1382223831</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382223831</a:ModificationDate>
<a:Modifier>coucou</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o80"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o82"/>
</c:Object2>
</o:Message>
<o:Message Id="o62">
<a:ObjectID>6D805C6A-1E07-48B5-AF41-F48DF71C1461</a:ObjectID>
<a:Name>Delete</a:Name>
<a:Code>Delete</a:Code>
<a:CreationDate>1382223852</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382224077</a:ModificationDate>
<a:Modifier>coucou</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o80"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o76"/>
</c:Object2>
</o:Message>
<o:Message Id="o60">
<a:ObjectID>48EEE5B4-FD36-40C0-BAF7-E6033548FACB</a:ObjectID>
<a:Name>Delete</a:Name>
<a:Code>Delete</a:Code>
<a:CreationDate>1382223857</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382224084</a:ModificationDate>
<a:Modifier>coucou</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o78"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o76"/>
</c:Object2>
</o:Message>
<o:Message Id="o58">
<a:ObjectID>A5BAE548-FE50-4EC3-BC5B-BB7BF4B5AD35</a:ObjectID>
<a:Name>Receive</a:Name>
<a:Code>Receive</a:Code>
<a:CreationDate>1382223972</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382223978</a:ModificationDate>
<a:Modifier>coucou</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o80"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o82"/>
</c:Object2>
</o:Message>
<o:Message Id="o56">
<a:ObjectID>E9A3C06B-A117-4628-8B74-552CBBAC7592</a:ObjectID>
<a:Name>LaunchGame()</a:Name>
<a:Code>LaunchGame__</a:Code>
<a:CreationDate>1382350067</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350103</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o84"/>
</c:Object1>
<c:Object2>
<o:Actor Ref="o86"/>
</c:Object2>
</o:Message>
<o:Message Id="o54">
<a:ObjectID>18E182CA-C564-4E69-8865-36E38FC02686</a:ObjectID>
<a:Name>GetKey()</a:Name>
<a:Code>GetKey__</a:Code>
<a:CreationDate>1382350112</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350131</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o84"/>
</c:Object1>
<c:Object2>
<o:Actor Ref="o86"/>
</c:Object2>
</o:Message>
<o:Message Id="o52">
<a:ObjectID>180A22F6-61B3-4D15-BA0F-3C76400CE8E6</a:ObjectID>
<a:Name>Play()</a:Name>
<a:Code>Play__</a:Code>
<a:CreationDate>1382350142</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350155</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o84"/>
</c:Object1>
<c:Object2>
<o:Actor Ref="o86"/>
</c:Object2>
</o:Message>
<o:Message Id="o50">
<a:ObjectID>18DBD023-C69F-4E86-A10F-A732436705EE</a:ObjectID>
<a:Name>Options()</a:Name>
<a:Code>Options__</a:Code>
<a:CreationDate>1382350176</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350307</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o84"/>
</c:Object1>
<c:Object2>
<o:Actor Ref="o86"/>
</c:Object2>
</o:Message>
<o:Message Id="o48">
<a:ObjectID>AB769CC7-DD87-4CB9-B761-D896E1751DAA</a:ObjectID>
<a:Name>GetScore()</a:Name>
<a:Code>GetScore__</a:Code>
<a:CreationDate>1382350212</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350222</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o84"/>
</c:Object1>
<c:Object2>
<o:Actor Ref="o86"/>
</c:Object2>
</o:Message>
<o:Message Id="o46">
<a:ObjectID>3BF4687A-A496-434D-8118-C6A90553A30A</a:ObjectID>
<a:Name>exit()</a:Name>
<a:Code>exit__</a:Code>
<a:CreationDate>1382350291</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350301</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o84"/>
</c:Object1>
<c:Object2>
<o:Actor Ref="o86"/>
</c:Object2>
</o:Message>
<o:Message Id="o43">
<a:ObjectID>7C2ABA3B-165F-46A2-BA0F-6B1687BCBF9A</a:ObjectID>
<a:Name>Create</a:Name>
<a:Code>Create</a:Code>
<a:CreationDate>1382350382</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350393</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o84"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o76"/>
</c:Object2>
</o:Message>
<o:Message Id="o41">
<a:ObjectID>6CC1BC9D-48A9-4530-88B9-197D62FF42AD</a:ObjectID>
<a:Name>Hide</a:Name>
<a:Code>Hide</a:Code>
<a:CreationDate>1382350410</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350418</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o84"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o76"/>
</c:Object2>
</o:Message>
<o:Message Id="o39">
<a:ObjectID>CA73D137-BD03-41D6-AC5B-A2EAB5C6123C</a:ObjectID>
<a:Name>Create</a:Name>
<a:Code>Create</a:Code>
<a:CreationDate>1382350491</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350499</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o78"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o76"/>
</c:Object2>
</o:Message>
<o:Message Id="o37">
<a:ObjectID>304220E3-9B6C-4240-B3DF-46676982F128</a:ObjectID>
<a:Name>ShowMap</a:Name>
<a:Code>ShowMap</a:Code>
<a:CreationDate>1382350529</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350538</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o78"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o76"/>
</c:Object2>
</o:Message>
<o:Message Id="o35">
<a:ObjectID>9CEF0AA3-614A-4D98-BA93-66A96BC93A03</a:ObjectID>
<a:Name>AddObj</a:Name>
<a:Code>AddObj</a:Code>
<a:CreationDate>1382350548</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350559</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o78"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o76"/>
</c:Object2>
</o:Message>
<o:Message Id="o33">
<a:ObjectID>9588AE0B-6401-4FF3-9A6E-B9CEAC7D5D98</a:ObjectID>
<a:Name>RmObj</a:Name>
<a:Code>RmObj</a:Code>
<a:CreationDate>1382350636</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350644</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o78"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o76"/>
</c:Object2>
</o:Message>
<o:Message Id="o31">
<a:ObjectID>046D427D-3005-4327-BB1A-81558C1F8E29</a:ObjectID>
<a:Name>AddScore</a:Name>
<a:Code>AddScore</a:Code>
<a:CreationDate>1382350659</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350679</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o78"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o76"/>
</c:Object2>
</o:Message>
<o:Message Id="o29">
<a:ObjectID>0D80038B-5071-4E96-903F-07F4A190458C</a:ObjectID>
<a:Name>getMenu</a:Name>
<a:Code>getMenu</a:Code>
<a:CreationDate>1382350700</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350711</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o84"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o76"/>
</c:Object2>
</o:Message>
<o:Message Id="o27">
<a:ObjectID>B2F7ACF0-7EE5-4A46-8E51-C55DC0394931</a:ObjectID>
<a:Name>AffScore</a:Name>
<a:Code>AffScore</a:Code>
<a:CreationDate>1382350747</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350756</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o84"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o76"/>
</c:Object2>
</o:Message>
<o:Message Id="o25">
<a:ObjectID>E5A32867-83B8-4D72-8075-A548E1A10C97</a:ObjectID>
<a:Name>Delete</a:Name>
<a:Code>Delete</a:Code>
<a:CreationDate>1382350774</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350782</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o84"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o76"/>
</c:Object2>
</o:Message>
<o:Message Id="o23">
<a:ObjectID>010DB187-B17E-49FA-95F8-7FCEFC9C69CC</a:ObjectID>
<a:Name>AddInfo</a:Name>
<a:Code>AddInfo</a:Code>
<a:CreationDate>1382350835</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382350844</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o78"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o76"/>
</c:Object2>
</o:Message>
<o:Message Id="o21">
<a:ObjectID>6E7042C0-D0CE-47B1-861B-4C2DC51A2585</a:ObjectID>
<a:Name>CloseSocket</a:Name>
<a:Code>CloseSocket</a:Code>
<a:CreationDate>1382351074</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382351104</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o76"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o82"/>
</c:Object2>
</o:Message>
<o:Message Id="o19">
<a:ObjectID>A3A1E8C0-B726-4EF8-A8F7-3E8BF3A61C64</a:ObjectID>
<a:Name>SetStr()</a:Name>
<a:Code>SetStr__</a:Code>
<a:CreationDate>1382351286</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382351308</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o76"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o80"/>
</c:Object2>
</o:Message>
<o:Message Id="o17">
<a:ObjectID>77D249D7-3F96-4DEF-B37E-35DC90814F70</a:ObjectID>
<a:Name>Loop</a:Name>
<a:Code>Loop</a:Code>
<a:CreationDate>1382351404</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382351414</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o84"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o76"/>
</c:Object2>
</o:Message>
<o:Message Id="o14">
<a:ObjectID>75F8598D-ED5F-496A-8EFF-EA1AF17C3D7E</a:ObjectID>
<a:Name>RmInfo</a:Name>
<a:Code>RmInfo</a:Code>
<a:CreationDate>1382351522</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382351556</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o78"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o76"/>
</c:Object2>
</o:Message>
<o:Message Id="o10">
<a:ObjectID>6595E58D-5EF3-4119-9B71-65BF7C5AE5F2</a:ObjectID>
<a:Name>ParseStr</a:Name>
<a:Code>ParseStr</a:Code>
<a:CreationDate>1382351601</a:CreationDate>
<a:Creator>Louis</a:Creator>
<a:ModificationDate>1382351616</a:ModificationDate>
<a:Modifier>Louis</a:Modifier>
<c:Object1>
<o:UMLObject Ref="o82"/>
</c:Object1>
<c:Object2>
<o:UMLObject Ref="o80"/>
</c:Object2>
</o:Message>
</c:Messages>
<c:TargetModels>
<o:TargetModel Id="o88">
<a:ObjectID>8B3406EF-A7E2-4882-B12E-DEAAC4BF944E</a:ObjectID>
<a:Name>Java</a:Name>
<a:Code>Java</a:Code>
<a:CreationDate>1382223287</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382223287</a:ModificationDate>
<a:Modifier>coucou</a:Modifier>
<a:TargetModelURL>file:///%_OBJLANG%/java5-j2ee14.xol</a:TargetModelURL>
<a:TargetModelID>0DEDDB90-46E2-45A0-886E-411709DA0DC9</a:TargetModelID>
<a:TargetModelClassID>1811206C-1A4B-11D1-83D9-444553540000</a:TargetModelClassID>
<c:SessionShortcuts>
<o:Shortcut Ref="o3"/>
</c:SessionShortcuts>
</o:TargetModel>
<o:TargetModel Id="o89">
<a:ObjectID>0857F809-423D-42EB-B056-5D49C2E5B9EC</a:ObjectID>
<a:Name>WSDL for Java</a:Name>
<a:Code>WSDLJava</a:Code>
<a:CreationDate>1382223287</a:CreationDate>
<a:Creator>coucou</a:Creator>
<a:ModificationDate>1382223287</a:ModificationDate>
<a:Modifier>coucou</a:Modifier>
<a:TargetModelURL>file:///%_XEM%/WSDLJ2EE.xem</a:TargetModelURL>
<a:TargetModelID>C8F5F7B2-CF9D-4E98-8301-959BB6E86C8A</a:TargetModelID>
<a:TargetModelClassID>186C8AC3-D3DC-11D3-881C-00508B03C75C</a:TargetModelClassID>
<c:SessionShortcuts>
<o:Shortcut Ref="o4"/>
</c:SessionShortcuts>
</o:TargetModel>
</c:TargetModels>
</o:Model>
</c:Children>
</o:RootObject>

</Model>